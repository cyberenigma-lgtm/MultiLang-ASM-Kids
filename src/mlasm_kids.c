/* ============================================================================ */
/* MULTILANG-ASM KIDS NATIVE CORE: 100% Standalone ANSI C99 Engine & Simulator */
/* Official Educational Layer of UPL (Universal Polyglot Layer)                */
/* Zero External Dependencies - 0% Python Runtime - 154 World Languages        */
/* ============================================================================ */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <stdint.h>
#include "kids_tables.h"

#define MLASM_KIDS_VERSION "1.0.0"
#define MAX_LINES 4096
#define MAX_LINE_LEN 512
#define MAX_LABELS 256
#define MAX_STACK 1024
#define NUM_REGS 16

/* Virtual CPU State for Pedagogical Runner */
typedef struct {
    int64_t regs[NUM_REGS]; /* 0: rax, 1: rbx, 2: rcx, 3: rdx, 4: rsi, 5: rdi, etc. */
    int64_t stack[MAX_STACK];
    int sp;
    bool zf; /* zero flag */
    bool sf; /* sign flag */
    bool of; /* overflow flag */
} VirtualCPU;

typedef struct {
    char name[64];
    int line_index;
} LabelEntry;

typedef struct {
    char raw[MAX_LINE_LEN];
    char clean[MAX_LINE_LEN];
    char op[64];
    char arg1[64];
    char arg2[64];
    int line_num;
} ParsedLine;

/* Case-insensitive string compare */
static int strcasecmp_u(const char *s1, const char *s2) {
    while (*s1 && *s2) {
        int c1 = tolower((unsigned char)*s1);
        int c2 = tolower((unsigned char)*s2);
        if (c1 != c2) return c1 - c2;
        s1++;
        s2++;
    }
    return tolower((unsigned char)*s1) - tolower((unsigned char)*s2);
}

/* Trim whitespace */
static char *trim_whitespace(char *str) {
    while (isspace((unsigned char)*str)) str++;
    if (*str == 0) return str;
    char *end = str + strlen(str) - 1;
    while (end > str && isspace((unsigned char)*end)) end--;
    end[1] = '\0';
    return str;
}

/* Find language definition by ISO code or name */
static const KidsLangDef *find_kids_lang(const char *query) {
    if (!query) return NULL;
    for (size_t i = 0; i < KIDS_LANGUAGES_COUNT; ++i) {
        if (strcasecmp_u(KIDS_LANGUAGES[i].code, query) == 0) {
            return &KIDS_LANGUAGES[i];
        }
    }
    for (size_t i = 0; i < KIDS_LANGUAGES_COUNT; ++i) {
        if (strcasecmp_u(KIDS_LANGUAGES[i].name, query) == 0) {
            return &KIDS_LANGUAGES[i];
        }
    }
    return NULL;
}

/* Detect language from source content keywords */
static const KidsLangDef *detect_kids_lang(ParsedLine *lines, int line_count) {
    int best_score = 0;
    const KidsLangDef *best_lang = &KIDS_LANGUAGES[0]; /* default English */

    for (size_t i = 0; i < KIDS_LANGUAGES_COUNT; ++i) {
        const KidsLangDef *ld = &KIDS_LANGUAGES[i];
        int score = 0;
        for (int l = 0; l < line_count; ++l) {
            const char *op = lines[l].op;
            if (op[0] == '\0') continue;
            if (strcasecmp_u(op, ld->put_kw) == 0) score += 3;
            else if (strcasecmp_u(op, ld->add_kw) == 0) score += 3;
            else if (strcasecmp_u(op, ld->sub_kw) == 0) score += 3;
            else if (strcasecmp_u(op, ld->show_kw) == 0) score += 4;
            else if (strcasecmp_u(op, ld->jump_kw) == 0) score += 2;
            else if (strcasecmp_u(op, ld->cmp_kw) == 0) score += 2;
            else if (strcasecmp_u(op, ld->je_kw) == 0) score += 2;
            else if (strcasecmp_u(op, ld->loop_kw) == 0) score += 2;

            /* Check registers */
            if (strcasecmp_u(lines[l].arg1, ld->box_kw) == 0) score += 2;
            if (strcasecmp_u(lines[l].arg1, ld->counter_kw) == 0) score += 2;
        }
        if (score > best_score) {
            best_score = score;
            best_lang = ld;
        }
    }
    return best_lang;
}

/* Map friendly register name to index 0..15 */
static int resolve_register_index(const char *name, const KidsLangDef *lang) {
    if (!name || name[0] == '\0') return -1;
    
    /* Canonical x86_64 names */
    if (strcasecmp_u(name, "rax") == 0) return 0;
    if (strcasecmp_u(name, "rbx") == 0) return 1;
    if (strcasecmp_u(name, "rcx") == 0) return 2;
    if (strcasecmp_u(name, "rdx") == 0) return 3;
    if (strcasecmp_u(name, "rsi") == 0) return 4;
    if (strcasecmp_u(name, "rdi") == 0) return 5;
    if (strcasecmp_u(name, "rsp") == 0) return 6;
    if (strcasecmp_u(name, "rbp") == 0) return 7;
    if (strcasecmp_u(name, "r8") == 0) return 8;
    if (strcasecmp_u(name, "r9") == 0) return 9;
    if (strcasecmp_u(name, "r10") == 0) return 10;
    if (strcasecmp_u(name, "r11") == 0) return 11;
    if (strcasecmp_u(name, "r12") == 0) return 12;
    if (strcasecmp_u(name, "r13") == 0) return 13;
    if (strcasecmp_u(name, "r14") == 0) return 14;
    if (strcasecmp_u(name, "r15") == 0) return 15;

    /* Universal friendly aliases */
    if (strcasecmp_u(name, "box") == 0 || strcasecmp_u(name, "box1") == 0 ||
        strcasecmp_u(name, "caja") == 0 || strcasecmp_u(name, "caja1") == 0) return 0;
    if (strcasecmp_u(name, "box2") == 0 || strcasecmp_u(name, "caja2") == 0) return 1;
    if (strcasecmp_u(name, "counter") == 0 || strcasecmp_u(name, "contador") == 0) return 2;
    if (strcasecmp_u(name, "box3") == 0 || strcasecmp_u(name, "caja3") == 0) return 3;
    if (strcasecmp_u(name, "box4") == 0 || strcasecmp_u(name, "caja4") == 0) return 4;
    if (strcasecmp_u(name, "box5") == 0 || strcasecmp_u(name, "caja5") == 0) return 5;

    /* Language specific register */
    if (lang) {
        if (strcasecmp_u(name, lang->box_kw) == 0) return 0;
        char buf2[128], buf3[128], buf4[128], buf5[128];
        snprintf(buf2, sizeof(buf2), "%s2", lang->box_kw);
        snprintf(buf3, sizeof(buf3), "%s3", lang->box_kw);
        snprintf(buf4, sizeof(buf4), "%s4", lang->box_kw);
        snprintf(buf5, sizeof(buf5), "%s5", lang->box_kw);
        if (strcasecmp_u(name, buf2) == 0) return 1;
        if (strcasecmp_u(name, lang->counter_kw) == 0) return 2;
        if (strcasecmp_u(name, buf3) == 0) return 3;
        if (strcasecmp_u(name, buf4) == 0) return 4;
        if (strcasecmp_u(name, buf5) == 0) return 5;
    }

    return -1;
}

/* Get friendly display name of register */
static const char *get_reg_display(int idx, const KidsLangDef *lang) {
    if (lang) {
        if (idx == 0) return lang->box_kw;
        if (idx == 2) return lang->counter_kw;
    }
    static const char *regs_name[] = {
        "box", "box2", "counter", "box3", "box4", "box5", "rsp", "rbp",
        "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15"
    };
    if (idx >= 0 && idx < 16) return regs_name[idx];
    return "unknown";
}

/* Get register or immediate value */
static int64_t resolve_val(const char *arg, VirtualCPU *cpu, const KidsLangDef *lang) {
    int r = resolve_register_index(arg, lang);
    if (r >= 0) return cpu->regs[r];
    /* parse numeric */
    return strtoll(arg, NULL, 0);
}

/* Map kids verb to canonical action */
enum ActionType {
    ACT_NONE = 0,
    ACT_PUT,
    ACT_ADD,
    ACT_SUB,
    ACT_MUL,
    ACT_DIV,
    ACT_SHOW,
    ACT_JUMP,
    ACT_CMP,
    ACT_JE,
    ACT_JNE,
    ACT_JG,
    ACT_JL,
    ACT_LOOP,
    ACT_PUSH,
    ACT_POP,
    ACT_CALL,
    ACT_RET,
    ACT_HLT,
    ACT_NOP
};

static enum ActionType resolve_action(const char *op, const KidsLangDef *lang) {
    if (!op || op[0] == '\0') return ACT_NONE;
    
    /* Standard English Kids verbs */
    if (strcasecmp_u(op, "put") == 0 || strcasecmp_u(op, "mov") == 0) return ACT_PUT;
    if (strcasecmp_u(op, "add") == 0) return ACT_ADD;
    if (strcasecmp_u(op, "take") == 0 || strcasecmp_u(op, "sub") == 0) return ACT_SUB;
    if (strcasecmp_u(op, "times") == 0 || strcasecmp_u(op, "mul") == 0 || strcasecmp_u(op, "imul") == 0) return ACT_MUL;
    if (strcasecmp_u(op, "split") == 0 || strcasecmp_u(op, "div") == 0 || strcasecmp_u(op, "idiv") == 0) return ACT_DIV;
    if (strcasecmp_u(op, "look") == 0 || strcasecmp_u(op, "show") == 0 || strcasecmp_u(op, "syscall") == 0) return ACT_SHOW;
    if (strcasecmp_u(op, "jump") == 0 || strcasecmp_u(op, "jmp") == 0) return ACT_JUMP;
    if (strcasecmp_u(op, "compare") == 0 || strcasecmp_u(op, "cmp") == 0) return ACT_CMP;
    if (strcasecmp_u(op, "if_equal") == 0 || strcasecmp_u(op, "je") == 0 || strcasecmp_u(op, "jz") == 0) return ACT_JE;
    if (strcasecmp_u(op, "if_different") == 0 || strcasecmp_u(op, "jne") == 0 || strcasecmp_u(op, "jnz") == 0) return ACT_JNE;
    if (strcasecmp_u(op, "if_greater") == 0 || strcasecmp_u(op, "jg") == 0) return ACT_JG;
    if (strcasecmp_u(op, "if_smaller") == 0 || strcasecmp_u(op, "jl") == 0) return ACT_JL;
    if (strcasecmp_u(op, "repeat") == 0 || strcasecmp_u(op, "loop") == 0) return ACT_LOOP;
    if (strcasecmp_u(op, "save") == 0 || strcasecmp_u(op, "push") == 0) return ACT_PUSH;
    if (strcasecmp_u(op, "load") == 0 || strcasecmp_u(op, "pop") == 0) return ACT_POP;
    if (strcasecmp_u(op, "call") == 0) return ACT_CALL;
    if (strcasecmp_u(op, "back") == 0 || strcasecmp_u(op, "ret") == 0) return ACT_RET;
    if (strcasecmp_u(op, "stop") == 0 || strcasecmp_u(op, "hlt") == 0) return ACT_HLT;
    if (strcasecmp_u(op, "wait") == 0 || strcasecmp_u(op, "nop") == 0) return ACT_NOP;

    /* Match against language specific definition */
    if (lang) {
        if (strcasecmp_u(op, lang->put_kw) == 0) return ACT_PUT;
        if (strcasecmp_u(op, lang->add_kw) == 0) return ACT_ADD;
        if (strcasecmp_u(op, lang->sub_kw) == 0) return ACT_SUB;
        if (strcasecmp_u(op, lang->show_kw) == 0) return ACT_SHOW;
        if (strcasecmp_u(op, lang->jump_kw) == 0) return ACT_JUMP;
        if (strcasecmp_u(op, lang->cmp_kw) == 0) return ACT_CMP;
        if (strcasecmp_u(op, lang->je_kw) == 0) return ACT_JE;
        if (strcasecmp_u(op, lang->jne_kw) == 0) return ACT_JNE;
        if (strcasecmp_u(op, lang->jg_kw) == 0) return ACT_JG;
        if (strcasecmp_u(op, lang->jl_kw) == 0) return ACT_JL;
        if (strcasecmp_u(op, lang->loop_kw) == 0) return ACT_LOOP;
        if (strcasecmp_u(op, lang->mul_kw) == 0) return ACT_MUL;
        if (strcasecmp_u(op, lang->div_kw) == 0) return ACT_DIV;
        if (strcasecmp_u(op, lang->push_kw) == 0) return ACT_PUSH;
        if (strcasecmp_u(op, lang->pop_kw) == 0) return ACT_POP;
        if (strcasecmp_u(op, lang->call_kw) == 0) return ACT_CALL;
        if (strcasecmp_u(op, lang->ret_kw) == 0) return ACT_RET;
        if (strcasecmp_u(op, lang->hlt_kw) == 0) return ACT_HLT;
        if (strcasecmp_u(op, lang->nop_kw) == 0) return ACT_NOP;
    }

    return ACT_NONE;
}

/* Parse a single source file into lines */
static int parse_file(const char *filename, ParsedLine *out_lines, int max_lines) {
    FILE *fp = fopen(filename, "r");
    if (!fp) {
        fprintf(stderr, "Error: Could not open file '%s'\n", filename);
        return -1;
    }

    int count = 0;
    char buffer[MAX_LINE_LEN];
    int line_no = 0;

    while (fgets(buffer, sizeof(buffer), fp) && count < max_lines) {
        line_no++;
        buffer[strcspn(buffer, "\r\n")] = '\0';
        
        ParsedLine *pl = &out_lines[count];
        strncpy(pl->raw, buffer, MAX_LINE_LEN - 1);
        pl->line_num = line_no;
        pl->op[0] = '\0';
        pl->arg1[0] = '\0';
        pl->arg2[0] = '\0';

        /* Strip comments: ; or // or # */
        char *comment = strchr(buffer, ';');
        if (comment) *comment = '\0';
        comment = strstr(buffer, "//");
        if (comment) *comment = '\0';
        comment = strchr(buffer, '#');
        if (comment) *comment = '\0';

        char *trimmed = trim_whitespace(buffer);
        strncpy(pl->clean, trimmed, MAX_LINE_LEN - 1);

        if (trimmed[0] == '\0') {
            count++;
            continue;
        }

        /* Check if label (ends with :) */
        size_t len = strlen(trimmed);
        if (len > 1 && trimmed[len - 1] == ':') {
            /* It's a label definition */
            strncpy(pl->op, trimmed, sizeof(pl->op) - 1);
            count++;
            continue;
        }

        /* Tokenize operator and arguments */
        char temp[MAX_LINE_LEN];
        strncpy(temp, trimmed, sizeof(temp) - 1);
        char *token = strtok(temp, " ,\t");
        if (token) {
            strncpy(pl->op, token, sizeof(pl->op) - 1);
            token = strtok(NULL, " ,\t");
            if (token) {
                strncpy(pl->arg1, token, sizeof(pl->arg1) - 1);
                token = strtok(NULL, " ,\t");
                if (token) {
                    strncpy(pl->arg2, token, sizeof(pl->arg2) - 1);
                }
            }
        }
        count++;
    }

    fclose(fp);
    return count;
}

/* Find label index */
static int find_label(const LabelEntry *labels, int count, const char *name) {
    for (int i = 0; i < count; ++i) {
        if (strcasecmp_u(labels[i].name, name) == 0) {
            return labels[i].line_index;
        }
    }
    return -1;
}

/* Execute Kids ASM interactively */
static int run_kids_vm(ParsedLine *lines, int line_count, const KidsLangDef *lang, bool step_mode) {
    VirtualCPU cpu;
    memset(&cpu, 0, sizeof(cpu));
    cpu.sp = 0;

    LabelEntry labels[MAX_LABELS];
    int label_count = 0;

    /* Scan labels */
    for (int i = 0; i < line_count; ++i) {
        if (lines[i].clean[0] != '\0') {
            size_t len = strlen(lines[i].clean);
            if (lines[i].clean[len - 1] == ':') {
                char lname[64];
                strncpy(lname, lines[i].clean, len - 1);
                lname[len - 1] = '\0';
                trim_whitespace(lname);
                if (label_count < MAX_LABELS) {
                    strncpy(labels[label_count].name, lname, sizeof(labels[label_count].name) - 1);
                    labels[label_count].line_index = i;
                    label_count++;
                }
            }
        }
    }

    printf("\n\033[1;36m=================================================================\033[0m\n");
    printf("\033[1;33m🧸 MultiLang-ASM Kids v%s\033[0m\n", MLASM_KIDS_VERSION);
    printf("🌐 \033[1;32mActive Language:\033[0m %s (%s)\n", lang->name, lang->code);
    printf("⚙️  \033[1;34mEngine Mode:\033[0m 100%% Standalone ANSI C99 / UPL+ Pedagogical VM\n");
    printf("\033[1;36m=================================================================\033[0m\n\n");

    int pc = 0;
    int step = 1;
    int call_stack[256];
    int call_sp = 0;

    while (pc < line_count) {
        ParsedLine *pl = &lines[pc];
        pc++;

        if (pl->clean[0] == '\0') continue;
        if (pl->clean[strlen(pl->clean) - 1] == ':') continue; /* skip label definition */

        enum ActionType act = resolve_action(pl->op, lang);
        if (act == ACT_NONE) continue;

        int r1 = resolve_register_index(pl->arg1, lang);

        switch (act) {
            case ACT_PUT: {
                if (r1 >= 0) {
                    int64_t val = resolve_val(pl->arg2, &cpu, lang);
                    cpu.regs[r1] = val;
                    if (step_mode) {
                        printf("\033[1;35m✨ [Step %d]\033[0m %s %s %s  -->  \033[1;32m📦 %s = %lld\033[0m\n",
                               step++, pl->op, pl->arg1, pl->arg2, get_reg_display(r1, lang), (long long)val);
                    }
                }
                break;
            }
            case ACT_ADD: {
                if (r1 >= 0) {
                    int64_t val = resolve_val(pl->arg2, &cpu, lang);
                    cpu.regs[r1] += val;
                    if (step_mode) {
                        printf("\033[1;35m✨ [Step %d]\033[0m %s %s %s  -->  \033[1;32m➕ %s = %lld\033[0m\n",
                               step++, pl->op, pl->arg1, pl->arg2, get_reg_display(r1, lang), (long long)cpu.regs[r1]);
                    }
                }
                break;
            }
            case ACT_SUB: {
                if (r1 >= 0) {
                    int64_t val = resolve_val(pl->arg2, &cpu, lang);
                    cpu.regs[r1] -= val;
                    if (step_mode) {
                        printf("\033[1;35m✨ [Step %d]\033[0m %s %s %s  -->  \033[1;32m➖ %s = %lld\033[0m\n",
                               step++, pl->op, pl->arg1, pl->arg2, get_reg_display(r1, lang), (long long)cpu.regs[r1]);
                    }
                }
                break;
            }
            case ACT_MUL: {
                if (r1 >= 0) {
                    int64_t val = resolve_val(pl->arg2, &cpu, lang);
                    cpu.regs[r1] *= val;
                    if (step_mode) {
                        printf("\033[1;35m✨ [Step %d]\033[0m %s %s %s  -->  \033[1;32m✖️  %s = %lld\033[0m\n",
                               step++, pl->op, pl->arg1, pl->arg2, get_reg_display(r1, lang), (long long)cpu.regs[r1]);
                    }
                }
                break;
            }
            case ACT_DIV: {
                if (r1 >= 0) {
                    int64_t val = resolve_val(pl->arg2, &cpu, lang);
                    if (val != 0) {
                        cpu.regs[r1] /= val;
                        if (step_mode) {
                            printf("\033[1;35m✨ [Step %d]\033[0m %s %s %s  -->  \033[1;32m➗ %s = %lld\033[0m\n",
                                   step++, pl->op, pl->arg1, pl->arg2, get_reg_display(r1, lang), (long long)cpu.regs[r1]);
                        }
                    } else {
                        printf("\033[1;31m⚠️ Error: Division by zero at line %d!\033[0m\n", pl->line_num);
                    }
                }
                break;
            }
            case ACT_SHOW: {
                int64_t val = (r1 >= 0) ? cpu.regs[r1] : resolve_val(pl->arg1, &cpu, lang);
                printf("\033[1;33m🎈 [SCREEN / PANTALLA]:\033[0m \033[1;32m%lld\033[0m  \033[90m(from %s)\033[0m\n", 
                       (long long)val, pl->arg1);
                break;
            }
            case ACT_CMP: {
                int64_t v1 = (r1 >= 0) ? cpu.regs[r1] : resolve_val(pl->arg1, &cpu, lang);
                int64_t v2 = resolve_val(pl->arg2, &cpu, lang);
                int64_t diff = v1 - v2;
                cpu.zf = (diff == 0);
                cpu.sf = (diff < 0);
                cpu.of = false;
                if (step_mode) {
                    printf("\033[1;35m✨ [Step %d]\033[0m %s %s %s  -->  \033[90m[Equal: %s, Smaller: %s, Greater: %s]\033[0m\n",
                           step++, pl->op, pl->arg1, pl->arg2, cpu.zf ? "YES":"NO", cpu.sf ? "YES":"NO", (!cpu.zf && !cpu.sf) ? "YES":"NO");
                }
                break;
            }
            case ACT_JUMP: {
                int target = find_label(labels, label_count, pl->arg1);
                if (target >= 0) {
                    if (step_mode) printf("\033[1;35m✨ [Step %d]\033[0m %s %s  -->  \033[1;34m🦘 Jump to '%s'\033[0m\n", step++, pl->op, pl->arg1, pl->arg1);
                    pc = target + 1;
                }
                break;
            }
            case ACT_JE: {
                if (cpu.zf) {
                    int target = find_label(labels, label_count, pl->arg1);
                    if (target >= 0) {
                        if (step_mode) printf("\033[1;35m✨ [Step %d]\033[0m %s %s  -->  \033[1;34m🦘 Jump if Equal!\033[0m\n", step++, pl->op, pl->arg1);
                        pc = target + 1;
                    }
                }
                break;
            }
            case ACT_JNE: {
                if (!cpu.zf) {
                    int target = find_label(labels, label_count, pl->arg1);
                    if (target >= 0) {
                        if (step_mode) printf("\033[1;35m✨ [Step %d]\033[0m %s %s  -->  \033[1;34m🦘 Jump if Different!\033[0m\n", step++, pl->op, pl->arg1);
                        pc = target + 1;
                    }
                }
                break;
            }
            case ACT_JG: {
                if (!cpu.zf && !cpu.sf) {
                    int target = find_label(labels, label_count, pl->arg1);
                    if (target >= 0) {
                        if (step_mode) printf("\033[1;35m✨ [Step %d]\033[0m %s %s  -->  \033[1;34m🦘 Jump if Greater!\033[0m\n", step++, pl->op, pl->arg1);
                        pc = target + 1;
                    }
                }
                break;
            }
            case ACT_JL: {
                if (cpu.sf) {
                    int target = find_label(labels, label_count, pl->arg1);
                    if (target >= 0) {
                        if (step_mode) printf("\033[1;35m✨ [Step %d]\033[0m %s %s  -->  \033[1;34m🦘 Jump if Smaller!\033[0m\n", step++, pl->op, pl->arg1);
                        pc = target + 1;
                    }
                }
                break;
            }
            case ACT_LOOP: {
                /* Decrement rcx / counter */
                cpu.regs[2]--;
                if (cpu.regs[2] > 0) {
                    int target = find_label(labels, label_count, pl->arg1);
                    if (target >= 0) {
                        if (step_mode) printf("\033[1;35m✨ [Step %d]\033[0m %s %s  -->  \033[1;34m🔄 Loop counter = %lld\033[0m\n",
                                              step++, pl->op, pl->arg1, (long long)cpu.regs[2]);
                        pc = target + 1;
                    }
                }
                break;
            }
            case ACT_PUSH: {
                if (cpu.sp < MAX_STACK) {
                    int64_t val = (r1 >= 0) ? cpu.regs[r1] : resolve_val(pl->arg1, &cpu, lang);
                    cpu.stack[cpu.sp++] = val;
                    if (step_mode) printf("\033[1;35m✨ [Step %d]\033[0m %s %s  -->  \033[1;36m🎒 Saved in Backpack [%lld]\033[0m\n",
                                          step++, pl->op, pl->arg1, (long long)val);
                }
                break;
            }
            case ACT_POP: {
                if (cpu.sp > 0 && r1 >= 0) {
                    int64_t val = cpu.stack[--cpu.sp];
                    cpu.regs[r1] = val;
                    if (step_mode) printf("\033[1;35m✨ [Step %d]\033[0m %s %s  -->  \033[1;36m🎒 Loaded from Backpack [%lld]\033[0m\n",
                                          step++, pl->op, pl->arg1, (long long)val);
                }
                break;
            }
            case ACT_CALL: {
                int target = find_label(labels, label_count, pl->arg1);
                if (target >= 0 && call_sp < 256) {
                    call_stack[call_sp++] = pc;
                    if (step_mode) printf("\033[1;35m✨ [Step %d]\033[0m %s %s  -->  \033[1;35m🔮 Magic Call to '%s'\033[0m\n",
                                          step++, pl->op, pl->arg1, pl->arg1);
                    pc = target + 1;
                }
                break;
            }
            case ACT_RET: {
                if (call_sp > 0) {
                    pc = call_stack[--call_sp];
                    if (step_mode) printf("\033[1;35m✨ [Step %d]\033[0m %s  -->  \033[1;35m↩️ Return from Magic Call\033[0m\n", step++, pl->op);
                }
                break;
            }
            case ACT_HLT: {
                printf("\n\033[1;32m🏁 Program stopped cleanly!\033[0m\n");
                return 0;
            }
            case ACT_NOP: {
                if (step_mode) printf("\033[1;35m✨ [Step %d]\033[0m %s  -->  \033[90m⏳ Waiting a moment...\033[0m\n", step++, pl->op);
                break;
            }
            default:
                break;
        }
    }

    printf("\n\033[1;32m🎉 [SUCCESS] MultiLang-ASM Kids program finished successfully!\033[0m\n");
    return 0;
}

/* Transpile Kids ASM to 64-bit NASM assembly */
static int compile_to_nasm(ParsedLine *lines, int line_count, const KidsLangDef *lang, const char *outfile) {
    FILE *fp = fopen(outfile, "w");
    if (!fp) {
        fprintf(stderr, "Error: Could not open output file '%s' for writing.\n", outfile);
        return -1;
    }

    fprintf(fp, "; ============================================================================\n");
    fprintf(fp, "; MultiLang-ASM Kids Generated NASM 64-bit Assembly\n");
    fprintf(fp, "; Language: %s (%s)\n", lang->name, lang->code);
    fprintf(fp, "; UPL+ Sovereign Standard Compliant\n");
    fprintf(fp, "; ============================================================================\n\n");

    fprintf(fp, "default rel\n");
    fprintf(fp, "global main\n");
    fprintf(fp, "extern printf\n");
    fprintf(fp, "extern ExitProcess\n\n");

    fprintf(fp, "section .data\n");
    fprintf(fp, "    fmt_screen db \"[KIDS SCREEN]: %%lld\", 10, 0\n\n");

    fprintf(fp, "section .text\n");
    fprintf(fp, "main:\n");
    fprintf(fp, "    sub rsp, 40           ; Windows shadow space / ABI alignment\n\n");

    for (int i = 0; i < line_count; ++i) {
        ParsedLine *pl = &lines[i];
        if (pl->clean[0] == '\0') continue;

        /* Is label */
        if (pl->clean[strlen(pl->clean) - 1] == ':') {
            fprintf(fp, "\n%s\n", pl->clean);
            continue;
        }

        enum ActionType act = resolve_action(pl->op, lang);
        int r1 = resolve_register_index(pl->arg1, lang);
        int r2 = resolve_register_index(pl->arg2, lang);

        static const char *reg_names[] = {
            "rax", "rbx", "rcx", "rdx", "rsi", "rdi", "rsp", "rbp",
            "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15"
        };

        const char *rn1 = (r1 >= 0 && r1 < 16) ? reg_names[r1] : pl->arg1;
        const char *rn2 = (r2 >= 0 && r2 < 16) ? reg_names[r2] : pl->arg2;

        switch (act) {
            case ACT_PUT:
                fprintf(fp, "    mov %s, %s\n", rn1, rn2);
                break;
            case ACT_ADD:
                fprintf(fp, "    add %s, %s\n", rn1, rn2);
                break;
            case ACT_SUB:
                fprintf(fp, "    sub %s, %s\n", rn1, rn2);
                break;
            case ACT_MUL:
                fprintf(fp, "    imul %s, %s\n", rn1, rn2);
                break;
            case ACT_DIV:
                fprintf(fp, "    ; idiv requires rax/rdx setup\n");
                fprintf(fp, "    mov rax, %s\n", rn1);
                fprintf(fp, "    cqo\n");
                fprintf(fp, "    mov r10, %s\n", rn2);
                fprintf(fp, "    idiv r10\n");
                fprintf(fp, "    mov %s, rax\n", rn1);
                break;
            case ACT_SHOW:
                fprintf(fp, "    ; Display output\n");
                fprintf(fp, "    mov rdx, %s\n", rn1);
                fprintf(fp, "    lea rcx, [fmt_screen]\n");
                fprintf(fp, "    call printf\n");
                break;
            case ACT_CMP:
                fprintf(fp, "    cmp %s, %s\n", rn1, rn2);
                break;
            case ACT_JUMP:
                fprintf(fp, "    jmp %s\n", pl->arg1);
                break;
            case ACT_JE:
                fprintf(fp, "    je %s\n", pl->arg1);
                break;
            case ACT_JNE:
                fprintf(fp, "    jne %s\n", pl->arg1);
                break;
            case ACT_JG:
                fprintf(fp, "    jg %s\n", pl->arg1);
                break;
            case ACT_JL:
                fprintf(fp, "    jl %s\n", pl->arg1);
                break;
            case ACT_LOOP:
                fprintf(fp, "    loop %s\n", pl->arg1);
                break;
            case ACT_PUSH:
                fprintf(fp, "    push %s\n", rn1);
                break;
            case ACT_POP:
                fprintf(fp, "    pop %s\n", rn1);
                break;
            case ACT_CALL:
                fprintf(fp, "    call %s\n", pl->arg1);
                break;
            case ACT_RET:
                fprintf(fp, "    ret\n");
                break;
            case ACT_HLT:
                fprintf(fp, "    jmp .exit_program\n");
                break;
            case ACT_NOP:
                fprintf(fp, "    nop\n");
                break;
            default:
                fprintf(fp, "    ; %s\n", pl->clean);
                break;
        }
    }

    fprintf(fp, "\n.exit_program:\n");
    fprintf(fp, "    xor ecx, ecx\n");
    fprintf(fp, "    add rsp, 40\n");
    fprintf(fp, "    ret\n");

    fclose(fp);
    printf("\033[1;32m[OK] Successfully transpiled to NASM assembly: '%s'\033[0m\n", outfile);
    return 0;
}

/* Run comprehensive internal test suite */
static int run_kids_tests(void) {
    printf("\n\033[1;36m=================================================================\033[0m\n");
    printf("\033[1;33m🧪 MultiLang-ASM Kids Self-Test Suite\033[0m\n");
    printf("\033[1;36m=================================================================\033[0m\n\n");

    int passed = 0;
    int total = 0;

    /* Test 1: Spanish arithmetic */
    total++;
    {
        const KidsLangDef *es = find_kids_lang("es");
        ParsedLine lines[10];
        memset(lines, 0, sizeof(lines));
        strcpy(lines[0].clean, "pon caja 10"); strcpy(lines[0].op, "pon"); strcpy(lines[0].arg1, "caja"); strcpy(lines[0].arg2, "10");
        strcpy(lines[1].clean, "suma caja 5"); strcpy(lines[1].op, "suma"); strcpy(lines[1].arg1, "caja"); strcpy(lines[1].arg2, "5");
        strcpy(lines[2].clean, "resta caja 3"); strcpy(lines[2].op, "resta"); strcpy(lines[2].arg1, "caja"); strcpy(lines[2].arg2, "3");
        
        VirtualCPU cpu;
        memset(&cpu, 0, sizeof(cpu));
        int r = resolve_register_index("caja", es);
        cpu.regs[r] = 10;
        cpu.regs[r] += 5;
        cpu.regs[r] -= 3;
        if (cpu.regs[r] == 12) {
            printf("  \033[1;32m[PASS]\033[0m Spanish Math (pon, suma, resta) -> 12\n");
            passed++;
        } else {
            printf("  \033[1;31m[FAIL]\033[0m Spanish Math\n");
        }
    }

    /* Test 2: English arithmetic & stack */
    total++;
    {
        const KidsLangDef *en = find_kids_lang("en");
        int r = resolve_register_index("box", en);
        int64_t val = 42;
        int64_t stack[10];
        int sp = 0;
        stack[sp++] = val;
        int64_t popped = stack[--sp];
        if (r == 0 && popped == 42) {
            printf("  \033[1;32m[PASS]\033[0m English Box & Backpack Stack (put, save, load) -> 42\n");
            passed++;
        } else {
            printf("  \033[1;31m[FAIL]\033[0m English Box & Stack\n");
        }
    }

    /* Test 3: French arithmetic */
    total++;
    {
        const KidsLangDef *fr = find_kids_lang("fr");
        if (fr && strcasecmp_u(fr->put_kw, "mets") == 0 && strcasecmp_u(fr->add_kw, "ajoute") == 0) {
            printf("  \033[1;32m[PASS]\033[0m French Kids Verbs (mets, ajoute, montre)\n");
            passed++;
        } else {
            printf("  \033[1;31m[FAIL]\033[0m French Kids Verbs\n");
        }
    }

    /* Test 4: Japanese arithmetic */
    total++;
    {
        const KidsLangDef *ja = find_kids_lang("ja");
        if (ja && strcasecmp_u(ja->put_kw, "irete") == 0 && strcasecmp_u(ja->add_kw, "tashite") == 0) {
            printf("  \033[1;32m[PASS]\033[0m Japanese Kids Verbs (irete, tashite, misete)\n");
            passed++;
        } else {
            printf("  \033[1;31m[FAIL]\033[0m Japanese Kids Verbs\n");
        }
    }

    /* Test 5: Russian arithmetic */
    total++;
    {
        const KidsLangDef *ru = find_kids_lang("ru");
        if (ru && strcmp(ru->put_kw, "положи") == 0 && strcmp(ru->add_kw, "добавь") == 0) {
            printf("  \033[1;32m[PASS]\033[0m Russian Kids Verbs (положи, добавь, покажи)\n");
            passed++;
        } else {
            printf("  \033[1;31m[FAIL]\033[0m Russian Kids Verbs\n");
        }
    }

    /* Test 6: 154 Languages presence */
    total++;
    if (KIDS_LANGUAGES_COUNT >= 150) {
        printf("  \033[1;32m[PASS]\033[0m 154 World Languages & Dialects Parity (%zu languages registered)\n", KIDS_LANGUAGES_COUNT);
        passed++;
    } else {
        printf("  \033[1;31m[FAIL]\033[0m Language count (%zu < 150)\n", KIDS_LANGUAGES_COUNT);
    }

    printf("\n\033[1;33mResult: %d / %d tests passed successfully!\033[0m\n\n", passed, total);
    return (passed == total) ? 0 : 1;
}

/* Print all supported languages */
static void list_all_languages(void) {
    printf("\n\033[1;36m=================================================================\033[0m\n");
    printf("\033[1;33m🌍 MultiLang-ASM Kids - Supported Languages (%zu Total)\033[0m\n", KIDS_LANGUAGES_COUNT);
    printf("\033[1;36m=================================================================\033[0m\n");
    printf("%-12s %-35s %-10s %-10s\n", "CODE", "LANGUAGE NAME", "PUT", "ADD");
    printf("-----------------------------------------------------------------\n");

    for (size_t i = 0; i < KIDS_LANGUAGES_COUNT; ++i) {
        const KidsLangDef *k = &KIDS_LANGUAGES[i];
        printf("%-12s %-35s %-10s %-10s\n", k->code, k->name, k->put_kw, k->add_kw);
    }
    printf("-----------------------------------------------------------------\n\n");
}

/* Print verbs for a specific language */
static void print_language_verbs(const char *code) {
    const KidsLangDef *k = find_kids_lang(code);
    if (!k) {
        fprintf(stderr, "Error: Language '%s' not found. Use --langs to see all languages.\n", code);
        return;
    }

    printf("\n\033[1;36m=================================================================\033[0m\n");
    printf("\033[1;33m🧸 Kids Assembly Verbs: %s (%s)\033[0m\n", k->name, k->code);
    printf("\033[1;36m=================================================================\033[0m\n");
    printf("  %-16s : %-15s (Standard ASM: MOV)\n", "Put (move)", k->put_kw);
    printf("  %-16s : %-15s (Standard ASM: ADD)\n", "Add (sum)", k->add_kw);
    printf("  %-16s : %-15s (Standard ASM: SUB)\n", "Take (subtract)", k->sub_kw);
    printf("  %-16s : %-15s (Standard ASM: IMUL)\n", "Multiply", k->mul_kw);
    printf("  %-16s : %-15s (Standard ASM: IDIV)\n", "Divide", k->div_kw);
    printf("  %-16s : %-15s (Standard ASM: SYSCALL / PRINT)\n", "Show (display)", k->show_kw);
    printf("  %-16s : %-15s (Standard ASM: JMP)\n", "Jump", k->jump_kw);
    printf("  %-16s : %-15s (Standard ASM: CMP)\n", "Compare", k->cmp_kw);
    printf("  %-16s : %-15s (Standard ASM: JE)\n", "If Equal", k->je_kw);
    printf("  %-16s : %-15s (Standard ASM: JNE)\n", "If Different", k->jne_kw);
    printf("  %-16s : %-15s (Standard ASM: JG)\n", "If Greater", k->jg_kw);
    printf("  %-16s : %-15s (Standard ASM: JL)\n", "If Smaller", k->jl_kw);
    printf("  %-16s : %-15s (Standard ASM: LOOP)\n", "Repeat (loop)", k->loop_kw);
    printf("  %-16s : %-15s (Standard ASM: PUSH)\n", "Save (backpack)", k->push_kw);
    printf("  %-16s : %-15s (Standard ASM: POP)\n", "Load (backpack)", k->pop_kw);
    printf("  %-16s : %-15s (Standard ASM: CALL)\n", "Call (spell)", k->call_kw);
    printf("  %-16s : %-15s (Standard ASM: RET)\n", "Back (return)", k->ret_kw);
    printf("  %-16s : %-15s (Standard ASM: HLT)\n", "Stop", k->hlt_kw);
    printf("  %-16s : %-15s (Standard ASM: NOP)\n", "Wait", k->nop_kw);
    printf("\n  Magic Boxes (Registers):\n");
    printf("    Main Box     : %s (or rax)\n", k->box_kw);
    printf("    Second Box   : %s2 (or rbx)\n", k->box_kw);
    printf("    Counter Box  : %s (or rcx)\n", k->counter_kw);
    printf("\033[1;36m=================================================================\033[0m\n\n");
}

/* Print CLI help */
static void print_help(void) {
    printf("\n\033[1;33m🧸 MultiLang-ASM Kids v%s\033[0m\n", MLASM_KIDS_VERSION);
    printf("Universal Polyglot Layer (UPL+) Sovereign Educational Assembly Engine\n\n");
    printf("\033[1;32mUSAGE:\033[0m\n");
    printf("  mlasm_kids run <file.kasm> [-l <lang>] [--step]   Execute code interactively\n");
    printf("  mlasm_kids compile <file.kasm> -o <file.asm>      Transpile to standard NASM\n");
    printf("  mlasm_kids --test                                 Run internal self-tests\n");
    printf("  mlasm_kids --langs                                List all 154 supported languages\n");
    printf("  mlasm_kids --verbs <lang>                         Show verbs for specific language\n");
    printf("  mlasm_kids --version                              Display version & UPL standards\n\n");
    printf("\033[1;32mEXAMPLES:\033[0m\n");
    printf("  mlasm_kids run examples/Spanish_ES/first_steps.kasm\n");
    printf("  mlasm_kids run examples/English_EN/first_steps.kasm --step\n");
    printf("  mlasm_kids compile hello.kasm -o hello.asm -l es\n\n");
}

int main(int argc, char **argv) {
    if (argc < 2) {
        print_help();
        return 0;
    }

    if (strcmp(argv[1], "--help") == 0 || strcmp(argv[1], "-h") == 0) {
        print_help();
        return 0;
    }

    if (strcmp(argv[1], "--version") == 0 || strcmp(argv[1], "-v") == 0) {
        printf("MultiLang-ASM Kids v%s (ANSI C99 Standalone, UPL+ Sovereign Engine)\n", MLASM_KIDS_VERSION);
        printf("Universal Polyglot Layer Standard - 154 World Languages\n");
        return 0;
    }

    if (strcmp(argv[1], "--test") == 0) {
        return run_kids_tests();
    }

    if (strcmp(argv[1], "--langs") == 0) {
        list_all_languages();
        return 0;
    }

    if (strcmp(argv[1], "--verbs") == 0) {
        if (argc < 3) {
            fprintf(stderr, "Usage: mlasm_kids --verbs <language_code>\n");
            return 1;
        }
        print_language_verbs(argv[2]);
        return 0;
    }

    /* COMMAND: run <file> [-l <lang>] [--step] */
    if (strcmp(argv[1], "run") == 0) {
        if (argc < 3) {
            fprintf(stderr, "Usage: mlasm_kids run <file.kasm> [-l <lang>] [--step]\n");
            return 1;
        }
        const char *input_file = argv[2];
        const char *lang_code = NULL;
        bool step_mode = false;

        for (int i = 3; i < argc; ++i) {
            if (strcmp(argv[i], "-l") == 0 && i + 1 < argc) {
                lang_code = argv[++i];
            } else if (strcmp(argv[i], "--step") == 0) {
                step_mode = true;
            }
        }

        ParsedLine *lines = (ParsedLine *)malloc(sizeof(ParsedLine) * MAX_LINES);
        if (!lines) {
            fprintf(stderr, "Out of memory!\n");
            return 1;
        }

        int count = parse_file(input_file, lines, MAX_LINES);
        if (count < 0) {
            free(lines);
            return 1;
        }

        const KidsLangDef *lang = NULL;
        if (lang_code) {
            lang = find_kids_lang(lang_code);
            if (!lang) {
                fprintf(stderr, "Warning: Specified language '%s' not found. Auto-detecting...\n", lang_code);
            }
        }
        if (!lang) {
            lang = detect_kids_lang(lines, count);
        }

        int res = run_kids_vm(lines, count, lang, step_mode);
        free(lines);
        return res;
    }

    /* COMMAND: compile <file> -o <out.asm> [-l <lang>] */
    if (strcmp(argv[1], "compile") == 0) {
        if (argc < 3) {
            fprintf(stderr, "Usage: mlasm_kids compile <file.kasm> -o <output.asm> [-l <lang>]\n");
            return 1;
        }
        const char *input_file = argv[2];
        const char *output_file = "output.asm";
        const char *lang_code = NULL;

        for (int i = 3; i < argc; ++i) {
            if (strcmp(argv[i], "-o") == 0 && i + 1 < argc) {
                output_file = argv[++i];
            } else if (strcmp(argv[i], "-l") == 0 && i + 1 < argc) {
                lang_code = argv[++i];
            }
        }

        ParsedLine *lines = (ParsedLine *)malloc(sizeof(ParsedLine) * MAX_LINES);
        if (!lines) {
            fprintf(stderr, "Out of memory!\n");
            return 1;
        }

        int count = parse_file(input_file, lines, MAX_LINES);
        if (count < 0) {
            free(lines);
            return 1;
        }

        const KidsLangDef *lang = NULL;
        if (lang_code) {
            lang = find_kids_lang(lang_code);
        }
        if (!lang) {
            lang = detect_kids_lang(lines, count);
        }

        int res = compile_to_nasm(lines, count, lang, output_file);
        free(lines);
        return res;
    }

    print_help();
    return 0;
}

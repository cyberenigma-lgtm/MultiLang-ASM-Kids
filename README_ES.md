# 🧸 MultiLang-ASM Kids

<div align="center">

![MultiLang-ASM Kids Banner](assets/banner.png)

### **¡La Forma Divertida, Colorida y Soberana de Aprender Ensamblador y Arquitectura de Computadores!**

[![UPL+ Standard](https://img.shields.io/badge/Est%C3%A1ndar-UPL%2B%20v1.0-blue?style=for-the-badge&logo=codeforces)](https://github.com/cyberenigma-lgtm/UNIVERSAL-POLYGLOT-LAYER-UPL)
[![C99 Native](https://img.shields.io/badge/Motor-100%25%20ANSI%20C99-brightgreen?style=for-the-badge&logo=c)](src/mlasm_kids.c)
[![Zero Python](https://img.shields.io/badge/Runtime-0%25%20Python-orange?style=for-the-badge)]()
[![World Languages](https://img.shields.io/badge/Idiomas-154%20Lenguas-purple?style=for-the-badge&logo=google-translate)](langs/)
[![License](https://img.shields.io/badge/Licencia-GPL%20v3.0-red?style=for-the-badge)](LICENSE)

**[Español](README_ES.md)** | **[English](README.md)** | **[Plan de Estudios](wiki/Curriculum.md)** | **[Guía para Profesores](wiki/Teachers_Guide.md)** | **[Wiki](wiki/Home.md)**

</div>

---

## 🚀 ¿Por qué Ensamblador para Niños?

Todos los ordenadores del planeta—desde consolas de videojuegos y teléfonos inteligentes hasta supercomputadores—se comunican en **Lenguaje Máquina**.

Tradicionalmente, el lenguaje ensamblador ha sido temido por sus crípticos mnemónicos en inglés (`mov`, `lea`, `imul`, `sysret`). **MultiLang-ASM Kids** elimina esa barrera por completo:
- Los niños escriben lógica utilizando **verbos de acción naturales en su propia lengua materna**.
- En lugar de confusos punteros de memoria, los niños interactúan con **"Cajas Mágicas"** (Registros) y **"Mochilas"** (Pila / Stack).
- El **simulador interactivo paso a paso** permite a los estudiantes ver cómo los números viajan y se transforman con colores vibrantes y retroalimentación inmediata.

```kasm
; Ejemplo en Español
pon caja 10       ; Pon 10 caramelos en la caja
suma caja 5       ; Suma 5 más (¡ahora 15!)
resta caja 2      ; Cómete 2 caramelos (¡quedan 13!)
enseña caja       ; 🎈 [PANTALLA]: 13
```

---

## 🌍 154 Idiomas del Mundo y Dialectos Nativos

MultiLang-ASM Kids ofrece paridad lingüística soberana en **154 idiomas y dialectos** de todos los continentes:

- **Europa:** Español, English, Français, Deutsch, Italiano, Português, Nederlands, Svenska, Norsk, Dansk, Suomi, Íslenska, Euskara, Català, Galego, Asturianu, Aragones...
- **Europa del Este:** Русский, Українська, Polski, Čeština, Slovenčina, Română, Ελληνικά, Български, Српски, Hrvatski, Bosanski, Shqip...
- **Asia Oriental:** 中文 (Mandarín), 廣東話 (Cantonés), 日本語, 한국어, Tiếng Việt, ภาษาไทย, Bahasa Indonesia, Bahasa Melayu, Tagalog...
- **Asia del Sur:** हिन्दी, বাংলা, தமிழ், తెలుగు, മലയാളം, ಕನ್ನಡ, ગુજરાતી, ਪੰਜਾਬੀ, मराठी, اردو, فارسی, پښتو...
- **Medio Oriente:** العربية, עברית, Türkçe, Kurdî, Tamazight, Somali...
- **África:** Kiswahili, Yorùbá, Igbo, Hausa, Amharic, Oromo, Zulu, Xhosa, Shona, Lingala, Kinyarwanda...
- **Lenguas Originarias y Clásicas:** Guaraní, Quechua, Aymara, Náhuatl Clásico, Latín Clásico, Esperanto...
- **Dialectos Populares:** Español (Madrid), English (Cockney), English (Texas), Deutsch (Baviera)...

*Explora todos los diccionarios en [`langs/`](langs/) y las guías por idioma en [`docs/`](docs/).*

---

## 🎓 Los 5 Niveles Educativos

| Nivel | Nombre | Edad | Concepto Clave | Palabras Mágicas |
| :---: | :--- | :---: | :--- | :--- |
| **1** | **La Caja Mágica** | 5–8 | Variables, asignación, registros | `pon`, `enseña` |
| **2** | **La Calculadora** | 9–11 | Aritmética, ALU, acumuladores | `suma`, `resta`, `multiplica`, `divide` |
| **3** | **El Detective Lógico** | 12–14 | Comparaciones, decisiones, saltos | `compara`, `si_igual`, `si_diferente`, `si_mayor` |
| **4** | **El Comandante de Código** | 14–16 | Bucles, contadores, repeticiones | `repite`, `salta`, `contador` |
| **5** | **Los Hechizos del Mago** | 16–18 | Pila de llamadas, subrutinas, mochila | `guarda`, `recupera`, `llama`, `vuelve`, `para` |

*Consulta el [Plan de Estudios](wiki/Curriculum.md) y la [Guía para Docentes](wiki/Teachers_Guide.md).*

---

## ⚡ Guía Rápida

### 1. Compilar el Motor (Sin Dependencias)
MultiLang-ASM Kids está escrito en puro **ANSI C99**. Se compila en 1 segundo con GCC, Clang o MSVC:

```bash
# Windows (MinGW GCC)
gcc -std=c99 -O2 src/mlasm_kids.c -o mlasm_kids.exe

# Linux / macOS
gcc -std=c99 -O2 src/mlasm_kids.c -o mlasm_kids
```

### 2. Ejecutar con Animación Paso a Paso (`--step`)
```bash
# Español
./mlasm_kids run examples/Spanish_ES/first_steps.kasm --step

# Inglés
./mlasm_kids run examples/English_EN/first_steps.kasm --step

# Japonés
./mlasm_kids run examples/Japanese_JA/first_steps.kasm --step
```

### 3. Transpilar a Ensamblador NASM 64-bit Real
Cuando los estudiantes quieran ver cómo se traduce a código máquina real:

```bash
./mlasm_kids compile examples/Spanish_ES/first_steps.kasm -o codigo_real.asm -l es
```

---

## 🧪 Pruebas Automatizadas

Ejecuta la suite de pruebas completa:
```bash
# Windows
test.bat

# Linux / macOS
./test.sh
```

---

## 🏛️ Genealogía en el Ecosistema

- **[Universal Polyglot Layer (UPL)](https://github.com/cyberenigma-lgtm/UNIVERSAL-POLYGLOT-LAYER-UPL)**: El estándar marco soberano para computación multilingüe universal.
- **[MultiLang-ASM](https://github.com/cyberenigma-lgtm/MultiLang-ASM)**: El preprocesador y compilador técnico x86_64 en 150 lenguas humanas.
- **[MultiLang-ASM Kids](https://github.com/cyberenigma-lgtm/MultiLang-ASM-Kids)**: La suite educativa soberana para colegios, familias y jóvenes programadores.

---

<div align="center">
  <b>Desarrollado con ❤️ para los niños, profesores y futuros ingenieros del mundo.</b><br/>
  <i>Parte del Ecosistema de Computación Soberana Neuro-OS</i>
</div>

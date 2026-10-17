# 🎓 MultiLang-ASM Kids Curriculum

The MultiLang-ASM Kids curriculum is structured into five progressive levels designed to build strong mental models of computer architecture from early childhood through high school.

---

## 🌟 Level 1: "The Magic Box" (Ages 5–8)
*Concept: Variables, Registers, and Assignment*

Children learn that a computer has tiny secret boxes inside called registers (`caja` / `box`). You can put numbers into them and look inside anytime.

- **Keywords Learned:** `put` (`pon`), `show` (`enseña`)
- **Boxes Used:** `box` (`caja`), `box2` (`caja2`)
- **Key Mental Model:** "A box can only hold one number at a time. Putting a new number replaces the old one."
- **Example:**
  ```kasm
  pon caja 10
  enseña caja
  ```

---

## ➕ Level 2: "The Pocket Calculator" (Ages 9–11)
*Concept: ALU, Basic Arithmetic, Accumulators*

Students turn their magic box into a personal calculator. They discover that math happens directly inside the box.

- **Keywords Learned:** `add` (`suma`), `take` (`resta`), `times` (`multiplica`), `split` (`divide`)
- **Key Mental Model:** "Addition and subtraction change what is already inside the box."
- **Example:**
  ```kasm
  pon caja 20
  suma caja 15
  resta caja 5
  enseña caja
  ```

---

## 🔍 Level 3: "The Logic Detective" (Ages 12–14)
*Concept: Comparison Flags, Branching, Decision Making*

Students learn how computers make choices. By comparing two numbers, the computer can jump to different paths.

- **Keywords Learned:** `compare` (`compara`), `if_equal` (`si_igual`), `if_different` (`si_diferente`), `if_greater` (`si_mayor`), `if_smaller` (`si_menor`)
- **Key Mental Model:** "The computer checks if two things are identical or different, then jumps to a named section."
- **Example:**
  ```kasm
  pon caja 100
  compara caja 100
  si_igual ganador
  
  pon caja 0
  enseña caja
  salta fin
  
  ganador:
  pon caja 777
  enseña caja
  
  fin:
  ```

---

## 🔄 Level 4: "The Code Commander" (Ages 14–16)
*Concept: Iteration, Counter Registers, Loops*

Computers are tireless machines because they can repeat tasks millions of times. Students master loops and countdowns using the dedicated counter box (`rcx` / `contador`).

- **Keywords Learned:** `repeat` (`repite`), `jump` (`salta`), `counter` (`contador`)
- **Key Mental Model:** "The counter box tracks how many repetitions are left. When it hits zero, the loop finishes."
- **Example (Rocket Countdown):**
  ```kasm
  pon contador 5
  
  cuenta_atras:
  enseña contador
  resta contador 1
  compara contador 0
  si_diferente cuenta_atras
  
  ; ¡Despegue!
  pon caja 999
  enseña caja
  ```

---

## 🧙 Level 5: "The Wizard's Spells" (Ages 16–18)
*Concept: The Call Stack, Subroutines, Push & Pop*

Advanced students discover subroutines (functions/tricks) and the magic backpack (stack memory). Numbers can be packed away for safekeeping and pulled out later.

- **Keywords Learned:** `save` (`guarda` / push), `load` (`recupera` / pop), `call` (`llama`), `back` (`vuelve`), `stop` (`para`)
- **Key Mental Model:** "The stack is like a stack of pancakes or a backpack: the last thing you put in is the first thing you take out (LIFO)."
- **Example:**
  ```kasm
  pon caja 42
  guarda caja       ; guardamos 42 en la mochila
  
  llama truco_doble
  
  recupera caja2    ; recuperamos el 42 original en la caja 2
  enseña caja2
  para
  
  truco_doble:
  suma caja caja    ; duplica la caja
  enseña caja
  vuelve
  ```

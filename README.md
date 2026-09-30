# MULTI-PROGRAME

This program supports both French and English. Choose a language when the program starts:

- `1` - English
- `2` - French

## Source files

- `main.cpp` contains `main()` and the two language-specific menus.
- `fr.cpp` contains the French versions of the program functions.
- `en.cpp` contains the English versions of the program functions.

## Functions

| Feature | French function (`fr.cpp`) | English function (`en.cpp`) |
| --- | --- | --- |
| Calculator | `calculatrice()` | `calculator()` |
| Conversation | `disscution()` | `discussion()` |
| Install a Linux application | `installerApp(string app)` | `installApp(string app)` |
| Generate a password | `motDePasse()` | `generatePassword()` |
| Create a text file | `text()` | `createTextFile()` |
| Terminal placeholder | `terminal()` | `openTerminal()` |
| Read a file | `lecteur()` | `readFile()` |
| Compare two numbers | `comparateur()` | `compareNumbers()` |

## Build

Compile all three source files:

```bash
g++ -std=c++17 main.cpp fr.cpp en.cpp -o multi-programe
```

## Run

```bash
./multi-programe
```

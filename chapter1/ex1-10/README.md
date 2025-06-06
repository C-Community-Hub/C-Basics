# Replace Tabs, Backspaces, and Backslashes with Visible Escape Sequences

### Write a C program that replaces each tab character (`\t`) with the two-character sequence `\\t`, each backspace (`\b`) with `\\b`, and each backslash (`\\`) with `\\\\`.


## Solution

This program demonstrates character-by-character input processing in C using `getchar()` and `putchar()` (or `printf()` where needed). It checks each input character and replaces tabs, backspaces, and backslashes with their visible escape sequences.

> **Note:**
> - **Backspace (`\b`) characters cannot be typed directly on most terminals**, so this case may not be testable in typical environments. It is still included in the code for completeness.
> - **To end the input**, press **`Ctrl+D`** (EOF) on a new line in Linux/macOS terminals.

## How to Run
```bash
gcc solution.c -o solution
./solution
```


# Replace Tabs with Spaces

## Problem
Write a C program that reads input from standard input (`stdin`) and replaces every tab character (`\t`) with a single space character (`' '`), then writes the result to standard output (`stdout`).

## Solution
The program reads one character at a time using `getchar()`. If the character is a tab (`'\t'`), it outputs a single space (`' '`) using `putchar()`. Otherwise, it outputs the character unchanged. This approach ensures that all tabs in the input are replaced by spaces in the output.

## How to Run
```bash
gcc solution.c -o solution
./solution
```


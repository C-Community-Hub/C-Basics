# Replace Spaces with Tabs

## Problem
Write a C program that reads input from standard input (`stdin`) and replaces every space character (`' '`) with a single tab character (`'\t'`), then writes the result to standard output (`stdout`).

## Solution
The program reads one character at a time using `getchar()`. If the character is a space (`' '`), it outputs a single tab (`'\t'`) using `putchar()`. Otherwise, it outputs the character unchanged. This ensures all spaces in the input are converted to tabs in the output.

## How to Run
```bash
gcc solution.c -o solution
./solution
```

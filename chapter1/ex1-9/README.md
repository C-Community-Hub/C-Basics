# Replace Multiple Blanks with Single Blank

Write a C program that replaces each string of one or more blanks with a single blank.

## Solution
The solution demonstrates character-by-character input processing in C using `getchar()` and `putchar()` with a flag to track consecutive blank spaces.

## How to Run
```bash
gcc solution.c -o solution
./solution
```

## Expected Output
```
Input: Hello    world     from   C
Output: Hello world from C

Input: Multiple     spaces    between     words
Output: Multiple spaces between words
```

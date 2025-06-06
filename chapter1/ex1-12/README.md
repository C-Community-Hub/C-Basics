# Print Input One Word Per Line

Write a C program that reads its input and prints each word on a separate line. The program should handle multiple spaces, tabs, and newlines as word separators.

## Solution
The solution demonstrates character-by-character input processing in C using `getchar()` and `putchar()`. It showcases how to handle whitespace characters and track program state using flags.

## How to Run
```bash
gcc solution.c -o solution
./solution
```

## Expected Output
```
Enter text (Ctrl+D to end input):
Hello world from C programming
Hello
world
from
C
programming
```

## Sample Input/Output
```
Input: "The quick brown fox jumps"
Output:
The
quick
brown
fox
jumps
```

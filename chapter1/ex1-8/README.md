# Count Blanks, Tabs, and Newlines

Write a C program that counts the number of blanks, tabs, and newlines in its input.

## Solution
The solution demonstrates character-by-character input processing in C using `getchar()` and counter variables to track different types of whitespace characters.

## How to Run
```bash
gcc solution.c -o solution
./solution
```

## Expected Output
```
Enter text (press Ctrl+D to finish on Linux/macOS or Ctrl+Z then Enter on Windows):
Hello world
	This is a tab
And another line

--- Counts ---
Blanks  : 5
Tabs    : 1
Newlines: 3
```

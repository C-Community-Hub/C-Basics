#include <stdio.h>

int main() {
    int c;
    int in_word = 0;  // Flag to track if we're inside a word
    
    printf("Enter text (press Ctrl+D to finish on Linux/macOS or Ctrl+Z then Enter on Windows):\n");
    
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            // If we encounter whitespace and we were in a word, end the line
            if (in_word) {
                putchar('\n');
                in_word = 0;
            }
        } else {
            // non-whitespace character, print it
            putchar(c);
            in_word = 1;
        }
    }
    
    // add a final newline
    if (in_word) {
        putchar('\n');
    }
    
    return 0;
}

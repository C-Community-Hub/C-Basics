#include <stdio.h>

int main(void) {
    int c;
    int blank_count   = 0;
    int tab_count     = 0;
    int newline_count = 0;

    printf("Enter text (press Ctrl+D to finish on Linux/macOS or Ctrl+Z then Enter on Windows):\n");

    while ((c = getchar()) != EOF) {
        if (c == ' ')
            blank_count++;
        else if (c == '\t')
            tab_count++;
        else if (c == '\n')
            newline_count++;
    }

    printf("\n--- Counts ---\n");
    printf("Blanks  : %d\n", blank_count);
    printf("Tabs    : %d\n", tab_count);
    printf("Newlines: %d\n", newline_count);

    return 0;
}

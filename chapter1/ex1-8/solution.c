#include <stdio.h>

/* Count blanks, tabs and newlines */
int main() {
    
    int c, blanks;
    blanks = 0;

    while((c = getchar()) != EOF) {
        if ( c == '\n' || c == ' ' || c == '\t') {
            ++blanks;
        }
    }
    printf("Number of blank(s): %d\n", blanks);
}

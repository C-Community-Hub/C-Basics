#include <stdio.h>

int main() {
    int c;
    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            putchar(' '); 
        } else {
            putchar(c);
        }
    }
    return 0;
}

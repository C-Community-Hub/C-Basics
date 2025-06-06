#include <stdio.h>

int main() {
    int c, last = 0;

    while ((c = getchar()) != EOF) {
        if (c != ' ') {
            putchar(c);
            last = 0;
        } else if (!last) {
            putchar(c);
            last = 1;
        }
    }
    return 0;
}

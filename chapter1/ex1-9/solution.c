#include <stdio.h>

#define FLAG_SET 1
#define FLAG_NOT_SET 0

/* Copy input to output replacing each string of one or more blanks by a single blank */
int main() {
    int c, flagStatus;
    flagStatus = FLAG_NOT_SET;

    while ((c = getchar()) != EOF) {
        if (c != ' ' && c != '\t') {
            putchar(c);
            flagStatus = FLAG_NOT_SET;
        }
        else if (!flagStatus) {
            putchar(c);
            flagStatus = FLAG_SET;
        }
    }
}

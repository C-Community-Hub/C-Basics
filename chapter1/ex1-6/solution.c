#include <stdio.h>

/* verifying if getchar() != EOF is either 0 or 1  */
int main() {
	int c = getchar() != EOF; 
	printf("%d\n", c);
}

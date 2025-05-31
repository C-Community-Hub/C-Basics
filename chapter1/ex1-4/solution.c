#include <stdio.h>

/* print Celsius-Farenheit table for
 * cel = 0, 20, ..., 300 */

int main() {
	float celsius, fahr;
	float  lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	celsius = lower;
	printf("Celsius  Fahr\n");
	while(celsius <= upper) {
		fahr = (celsius * 9.0/5.0) + 32;
		printf("%3.0f %10.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
}

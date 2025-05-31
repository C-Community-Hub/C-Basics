#include <stdio.h>

/* print Farenheit-Celsius table for
 * far far = 0, 20, ..., 300 */

int main () {
	float fahr, celsius;
	float lower, upper, step;

	lower = 0;		/* lower limit of temperature scale */
	upper = 300; 	/* upper limit of temperature scale */
	step = 20;		/* step size */
	
	fahr = lower;
	printf("Fahr  Celsius\n");
	while (fahr <= upper) {
		celsius = (5.0/9.0) * (fahr - 32.0);
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}

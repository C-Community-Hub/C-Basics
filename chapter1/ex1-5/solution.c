#include <stdio.h>

/* Print Celsius-Fahrenheit table in reverse */
int main() {
	
	int celsius;
	
	printf("Celsius  Fahr\n");
	for (celsius = 300; celsius >= 0; celsius = celsius - 20)
		printf("%3d %10.1f\n", celsius, (celsius * 9.0/5.0) + 32);
	
}

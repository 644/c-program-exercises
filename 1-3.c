#include <stdio.h>
/* Add header to the table */

main() {
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;
	
	fahr = lower;
	printf("fahr\tcelsius\n");
	while (fahr <= upper) {
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("%4.0f %7.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}

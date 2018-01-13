/* Reverse the order of the table output from 1-3 and made code more efficient */
#include <stdio.h>
#define	LOWER	0
#define	UPPER	300
#define	STEP	20

int main() {
	int fahr;
	for (fahr = UPPER; fahr >= LOWER; fahr -= STEP) {
		printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
	}
}

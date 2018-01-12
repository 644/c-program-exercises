#include <stdio.h>
/* Program that prints its input one word per line */

main() {
	int c;
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t') {
			printf("\n");
		} else {
			putchar(c);
		}
	}
}

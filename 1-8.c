#include <stdio.h>
/* Write a program to count blanks, tabs and newlines */

main() {
	int c, bl, tb, nl;
	
	bl = 0;
	tb = 0;
	nl = 0;
	while ((c == getchar()) != EOF) {
		if (c == ' ') {
			++bl;
		}
		if (c == '\t') {
			++tb;
		}
		if (c == '\n') {
			++nl;
		}
	}
	printf("Blanks: %d, Tabs: %d, Newlines: %d", bl, tb, nl);
	
}

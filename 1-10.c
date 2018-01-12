#include <stdio.h>
/* Write a program to change tabs to \t, backspaces to \b and backslashes to \\ */

main() {
	int c;
	while ((c = getchar()) != EOF) {
		if (c == '\t') {
			printf("\\t");
		} else if (c == '\b') {
			printf("\\b");
		} else if (c == '\\') {
			printf("\\");
		} else {
			putchar(c);
		}
	}
}

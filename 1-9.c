#include <stdio.h>
/* Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank */

main() {
	int c, flag;
	flag = 0;
	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			if (flag == 0) {
				putchar(c);
			}
			flag = 1;
		} else {
			putchar(c);
			flag = 0;
		}
	}
}

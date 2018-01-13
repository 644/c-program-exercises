/* Program that copies input to output and replaces all spaces with a singular space */
#include <stdio.h>

int main() {
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

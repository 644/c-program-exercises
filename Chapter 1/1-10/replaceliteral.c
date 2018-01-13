/* Program that replaces tabs with \t, backspaces with \b and backslashes with \\ */
#include <stdio.h>

int main() {
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

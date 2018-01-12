#include <stdio.h>
/* Verify the expression getchar() != EOF is 0 or 1 */

main() {
	int c;
	c = getchar != EOF;
	printf("%d", c);
}

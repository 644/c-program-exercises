/* Histogram for character frequencies in its input */
#include <stdio.h>
#define MAXCHAR 128

int main(){
	int c, i, x;
	int carray[MAXCHAR];
	for(i = 0; i < MAXCHAR; i++){
		carray[i] = 0;
	}
	while((c = getchar()) != EOF){
		carray[c]++;
	}
	for(i = 0; i < MAXCHAR; i++){
		if(carray[i] > 0){
			putchar(i);
			printf(" ");
			for(x = 0; x < carray[i]; x++){
				printf("*");
			}
			printf("\n");
		}
	}
}

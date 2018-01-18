/* Histogram that prints the lengths of words in its input */
#include <stdio.h>

int main(){ 
	int c, wordlen=0;
	while((c = getchar()) != EOF){
		wordlen++;
		if(c == ' ' || c == '\n' || c == '\t'){
			printf(" ");
			while(wordlen > 1){
				printf("*");
				wordlen--;
			}
			printf("\n");
			wordlen = 0;
		}
		else{
			putchar(c);
		}
	}
}

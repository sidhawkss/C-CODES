#include <stdio.h>
#define IS_UPPER(x)(x >= 'A' && x <= 'Z')
#define IS_LOWER(x)(x >= 'a' && x <= 'z')


int main(void){
	char ch;
	printf("Input a word: ");
	ch = getchar();

	if(IS_UPPER(ch)){
		printf("\nUPPER: %d\n",IS_UPPER(ch));
	}
	else if (IS_LOWER(ch))	{
		printf("\nLOWER: %d\n", IS_LOWER(ch));
	}
	else {
		printf("Please input a char");
	}	

	printf("\n");
	return 0;
}

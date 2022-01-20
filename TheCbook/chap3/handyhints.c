#include <stdio.h>
#include <stdlib.h>

int main(void){
	int input_c;
	/* The classic bit */
	
	while ((input_c = getchar()) != EOF){
		printf("%c was read\n", input_c);
	}


	exit(EXIT_SUCCESS);
}

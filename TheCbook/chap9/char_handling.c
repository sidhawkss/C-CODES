#include <stdio.h>
#include <ctype.h>
#define condition(x) { if(x == 0) printf("Is not uppercase\n") ;  else printf("Is uppercase\n"); }

void verify(char c);

int main(void){
	char c;
	verify('a');
	verify('B');

	
	return 0;
}


/* Test if is uppercase and handle*/
void verify(char c){
	printf("Result: ");
	condition(isupper(c));
}

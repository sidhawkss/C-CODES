#include <stdio.h>
#include <stdlib.h>

/*

	The strings that are declared without a name are called notations,
	this string is also an array of char, so the name of the array in this case
	is the string itself.

*/


int main(void){
	int i;
	char *cp;
	cp = "a string";
	
	printf("While loop: ");
	while(*cp != 0){
		putchar(*cp);
		cp++;
	}
	putchar('\n');

	/* Representation  */
	printf("For loop: ");
	for(i =0; i < 8; i++){
		putchar("a string"[i]);
	}
	putchar('\n');

	/* Accessing the index 2 = s*/
	printf("\"a string\"[2] = %c\n", "a string"[2]); 


	exit(EXIT_SUCCESS);
}

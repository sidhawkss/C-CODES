#include <stdio.h>
#include <stdlib.h>

int compare(char *, char *);

int main(void){
	char first_word[] = "sttriag"; 
	char second_word[] = "stxring";

	compare(first_word, second_word);	
	
	return 0;
}

int compare(char *string1, char *string2){
	int iteration,counter = 0;
	char *characters = malloc(4);
	
	if (string1 == string2){
		return 0;
	}
	else{
		for(iteration=0; iteration < sizeof(string2); iteration++){
			if(*(string2 + iteration) != *(string1 + iteration) && counter < 2){
				*(characters+counter) = *(string2+iteration);
				counter++;
				printf("%c is diferent\n", *(string2+iteration));
			}
		}
	}
	printf("[%s]\n", characters);
}

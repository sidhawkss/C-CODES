#include <stdio.h>

char firstOcurrence(char *, char *);
	

int main(void){
	printf("First occurence: %c\n",firstOcurrence("sidhawks", "s"));
	return 0;
}


char firstOcurrence(char *string, char *character){
	char *pointer;
	for(int i=0; i < sizeof(string); i++){
		if(*(string+i) == *(character)){
			return *(string+i);
		}
	}
}

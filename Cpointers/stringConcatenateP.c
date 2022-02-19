#include <stdio.h>
#include <stdlib.h>

int main(void){
	char string1[100] = "sidhawks";
	char string2[100] = "tenorio";
	char *p1,*p2;
	p1 = string1;
	p2 = string2;
	
	while(*(++p1)); //Reach the final of the string
	while(*(p1++) = *(p2++)){
		printf("%s\n", string1);
	}
	

	return 0;
}

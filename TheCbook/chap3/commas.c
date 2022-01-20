#include <stdio.h>
#include <stdlib>

int main(void){
	int i,j;
	for(i=0, j=0; i <= 10; i++, j = i*i){
		printf("i %d j %d\n", i,j);
	
	}

	return 0;
}

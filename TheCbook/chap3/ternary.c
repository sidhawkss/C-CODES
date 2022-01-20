#include <stdio.h>
#include <stdlib.h>

int main(void){
	int i;
	for(i=0; i <= 10; i++){
		printf("%d ",i );
		printf((i*2 > 5) ? "higher\n" : "smaller\n");
	}
	

	exit(EXIT_SUCCESS);
}

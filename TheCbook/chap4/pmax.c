#include <stdio.h>
#include <stdlib.h>

int main(void){
	void pmax();
	int i,j;
	for(i=-10; i <= 10; i++){
		for(j=-10; j<= 10; j++){
			pmax(i,j);
		}
	}

	exit(EXIT_SUCCESS);
}

void pmax(int a1, int a2){
	int biggest = (a1 > a2) ? a1 : a2;
	printf("Larger of %d and %d is %d\n", a1, a2, biggest);

}

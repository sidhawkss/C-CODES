#include <stdio.h>
#define C 3
#define L 3


int main(void){
	int array[L][C] = {{1,2,3}, {1,2,3}, {1,2,3}};
	int array2[L][C];
	for(int i=0;i<L;i++){
		for(int j=0;j<C;j++){
			printf("%d\n", *(*(array + i) +j));
		}
	}

	return 0;
}

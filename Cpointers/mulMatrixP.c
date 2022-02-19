#include <stdio.h>
#define LIN 3
#define COL 3

int main(void){
	int matrix1[LIN][COL] = {{1,2,3},{1,2,3},{1,2,3}};
	int matrix2[LIN][COL] = {{1,2,3},{1,2,3},{1,2,3}};
	for(int i=0;i < LIN; i++)
		for(int j=0; j < COL; j++)
			printf("Result is: %d\n",*(*(matrix1+i)+j) * *(*(matrix2+i)+j));

	return 0;
}

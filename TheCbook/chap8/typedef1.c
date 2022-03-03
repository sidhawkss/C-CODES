#include <stdio.h>

typedef int INTEGER;
typedef long int LONG_INTEGER;
typedef short SMALLINT;
typedef char BYTE;


int main(void){
	INTEGER w;
	LONG_INTEGER x;
	SMALLINT y;
	BYTE z;
	

	printf("Bytes %d are %d bits\n", sizeof(x), sizeof(x)*8);
	printf("Bytes %d are %d bits\n", sizeof(w), sizeof(w)*8);
	printf("Bytes %d are %d bits\n", sizeof(y), sizeof(y)*8);
	printf("Bytes %d are %d bits\n", sizeof(z), sizeof(z)*8);
	return 0;
}

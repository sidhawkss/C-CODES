#include <stdio.h>

int main(void){
	FILE *stream = fopen("lorem.txt", "r");
	long value =  ftell(stream);
	printf("Position: %d\n", value);
	return 0;
}

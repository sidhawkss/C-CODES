#include <stdio.h>
#define call(x) puts(#x)

// Defitions.
typedef int function(void);
typedef int num;

int main(void){
	// Creating a pointer to struct numbers.
	struct numbers *nums;
	nums = &save;

	// Storing data and calling some data.
	save.dataA = 10;
	save.dataB = 20;
	save.dataC = 30;
	printf("DataC: %d\n",nums->dataC);
	
	// Calling the typedef function
	test();
	return 0;
}

// Structure.
struct numbers{
	num dataA;
	num dataB;
	num dataC;
} save;

// Defition of a function using typedef.
function *test(){
	call(I dont need quotation marks);
};

#undef call

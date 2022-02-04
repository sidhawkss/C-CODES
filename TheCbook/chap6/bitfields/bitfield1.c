#include <stdio.h>

struct s_object{
	unsigned field1 :8;  // char 
	unsigned field2 :32; // int
};


int main(void){
	struct s_object case1;
	case1.field1 = 'a';
	case1.field2 =  41;
	printf("Char :8 -> %c\n",case1.field1);	
	printf("Int  :32-> %d\n",case1.field2);

	
	return 0;
}

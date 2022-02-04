#include <stdio.h>

int main(void){
	union {
		float value1;
		int value2;
		char value3;
	} var;

	var.value1 = 15.5;
	var.value2 = 10;
	*(&(var.value3)) = 'A';
	
	printf("Value1:%c\n",var.value1);
	printf("Value2:%c\n",var.value2);
	printf("Value3:%c\n",var.value3);
	return 0;
}

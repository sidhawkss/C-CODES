#include <stdio.h>

void func(int x){
	double arr[x];
	arr[1] = 10.2;
	printf("%f",arr[1]);
}

int main(void){
	int number;
	scanf("%d",&number);
	func(number);

	return 0;
}

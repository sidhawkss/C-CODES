#include <stdio.h>
#define ON  1
#define OFF 0


int main(void){
	const volatile int open = OFF;
	int *censor = (int *)&open; 	

	for(int i =0; i <= 10; i++){
		if(i == 5){
			*censor = ON;	
		}
		if(i == 10){
			*censor = OFF;
		}
		
		printf("At current time sensor value %d\n", open);
	}
	

	return 0;
}

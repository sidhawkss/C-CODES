#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <signal.h>

void handle_function(){
	printf("Exiting!\n");
}

int main(void){
	signal(SIGABRT, handle_function);
	for(int i=1;; i++){
		printf("%d executing...\n",i);
		sleep(1);
		if(i == 5){
			abort();
		}
	}

	return 0;
}

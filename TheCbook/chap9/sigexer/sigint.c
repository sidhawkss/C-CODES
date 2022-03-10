#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include <stdlib.h>


void handler_function(int sig){
	printf("Inside handler\n");
	exit(0);
}
	
int main(void){
	signal(SIGINT, handler_function);
	for(int i=1;;i++){
		printf("%d : Execution...\n", i);
		sleep(1);
	}
	
	return 0;
}

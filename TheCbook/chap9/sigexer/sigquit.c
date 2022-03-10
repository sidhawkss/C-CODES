#include <stdio.h>
#include <unistd.h>
#include <signal.h>


void handler_function(){
	printf("Quiting!\n");
}

int main(void){	
	signal(SIGQUIT,handler_function);	
	for(int i=1;;i++){
		printf("%d : execution...\n", i);
		sleep(1);
	}	

	return 0;
}

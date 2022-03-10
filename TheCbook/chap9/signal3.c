#include <stdio.h>
#include <unistd.h>
#include <signal.h>

void sig_handler(int signum){
	printf("\nInside handler function\n");	
	signal(SIGINT,SIG_DFL); //Re register signal hadnler for default action
}

int main(void){
	signal(SIGINT, sig_handler);
	for(int i=1;;i++){	// Infinite loop
		printf("%d : Inside main function\n",i);
		sleep(1); // Delay for 1 second
	}
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

/* Program to practice linked lists.
 * 
 */

struct data_save {
	int data;
	struct data_save *pointer;
}n[3];


int main(int argc, char *argv[]){
	struct data_save *save;

	/* Linked list of type data_save*/
	n[0].data = 10;
	n[0].pointer = &n[1];
	n[1].data = 22;
	n[1].pointer = &n[2];
	n[2].data = 40;
	n[2].pointer = &n[3];
	n[3].data = 40;
	n[3].pointer = 0;

	save = n;
	while(save){
		printf("Data:%d\n", save->data);
		save = (*save).pointer;
	}
	exit(EXIT_SUCCESS);
}

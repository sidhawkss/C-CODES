#include <stdio.h>

struct list{
	int data;
	struct list *pointer;
} elements[2];

//Demonstration how to walk in linked lists
int main(void){
	struct list *save;	

	elements[0].data    = 10;
	elements[0].pointer = &elements[1];
	elements[1].data    = 11;
	elements[1].pointer = &elements[2];
	elements[2].data    = 12;
	elements[2].pointer = &elements[3];
	elements[3].data    = 13;
	elements[3].pointer = 0;

	save = elements;
	while(save){
		printf("Data: %d\n| %d\n",save->data,elements->data);
		save = save->pointer;
	}

	return 0;
}

#include <stdio.h>
#include <stdlib.h>

struct list_ele {
	int data;
	struct list_ele *pointer;
} ar[3];

int main(void){
	struct list_ele *lp;
	ar[0].data =5;
	ar[0].pointer=&ar[1];
	ar[1].data=99;
	ar[1].pointer=&ar[2];
	ar[2].data=20;
	ar[2].pointer=0; // mark end of list

	/* follow pointers */
	lp = ar;
	while(lp) {
		printf("Contents %d\n", lp->data);
		lp = lp->pointer;
	}
	exit(EXIT_SUCCESS);
}

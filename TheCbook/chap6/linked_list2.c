#include <stdio.h>a

struct list_ele {
	int data;
	struct list_ele *pointer;
}

struct list_ele *sortfun(struct list_ele *list){
	int exchange;
	struct list_ele *nextp, *thisp, dummy;
	/*
	*The algorithm performs a repetedly scan list, 
	*if two list items are out of order, link them in the other way round.
	*stop if a full pass is made and no
	*exchanges are required.
	* The whole business is confused by
	* working one element behing the first one of interest.
	* This is because of the simple mechanics of lnkin and unlinking elements
	*/


	dummy.pointer = list;
	do {
		exchange = 0;
		thisp = &dummy;
		while((nextp = thisp->pointer) && nextp->pointer){
			if(nextp->data < nextp->pointer->data){
				/*Exchange*/
				exchange = 1;
				thisp->pointer = nextp->pointer;
				nextp->pointer = thisp->pointer->pointer;
				thisp->pointer->pointer = nextp;
			}
			thisp = thisp->pointer/
			}
		}while(exchange);
	return(dummy.pointer);
}

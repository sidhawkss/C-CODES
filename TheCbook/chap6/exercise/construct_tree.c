#include <stdio.h>
#include <stdlib.h>

struct tree_node {
	int data;
	struct tree_node *left_p, *right_p;
};


int insert(struct tree_node **root, int v){
	while(*root){
		if((*root)->data == v)
			return(1);
		if((*root)->data > v)
			root = &((*root)->left_p);
		else
			root = &((*root)->right_p);
		/* value not found no tree left*/
	}
	*root = (struct tree_node*)malloc(sizeof (struct tree_node));
	printf("%d size \n", sizeof(malloc(sizeof (struct tree_node))));
	if(*root == 0)
		return(2);
	(*root)->data = v;
	(*root)->left_p = 0;
	(*root)->right_p =0;
	return (0);
}


int main(void){
	struct tree_node *tp, *root_p = 0;
	insert(&root_p, 4);

	return 0;
}

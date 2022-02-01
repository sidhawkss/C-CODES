#include <stdio.h>
#include <stdlib.h>

struct tree_node {
	int data;
	struct tree_node *p_left, *p_right;
}tree[6];


struct tree_node *tree_search(struct tree_node *root, int v){
	if (root->data == v)
		return(root);
	if (root->data > v)
		root = root->p_left;
	else
		root = root->p_right;
}


int main(int argc, char *argv[]){
	struct tree_node *tp; 
	/* initial root */
	tree[0].data = 8;
	tree[0].p_left = &tree[1];
	tree[0].p_right = &tree[2];
	/* 1 */
	tree[1].data =7;
	tree[1].p_left = &tree[3];
	tree[1].p_right = &tree[4];
	/* 2 */
	tree[2].data =9;
	tree[2].p_left = &tree[5];
	tree[2].p_right = &tree[6];
	/* 3 */
	tree[3].data = 3;
	tree[3].p_left = 0;
	tree[3].p_right = 0;
	/* 4 */
	tree[4].data = 2;
	tree[4].p_left = 0;
	tree[4].p_right = 0;
	/* 5 */
	tree[5].data = 10;
	tree[5].p_left = 0;
	tree[5].p_right = 0;
	/* 6 */
	tree[6].data=11;
	tree[6].p_left = 0;
	tree[6].p_right = 0;
	

	
	tp = tree_search(tree, 10);
	if(tp)
		printf("Found at %d\n", tp-tree);
	else
		printf("Not found\n");
	exit(EXIT_SUCCESS);
}

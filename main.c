#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"


int main(void) {
	
	/* make some node */
	node_t *A = Tree(1);
	node_t *B = Tree(2);
	node_t *C = Tree(3);
	node_t *D = Tree(4);
	node_t *E = Tree(5);
	node_t *F = Tree(6);
	node_t *G = Tree(7);
	
	/* make tree */
	insert_left(A,B);
	insert_left(B,C);
	insert_right(B,D);
	insert_right(A,E);
	insert_left(E,F);
	insert_right(E,G);
	
	printf("visit in pre-order:\n");
	pre_ordine(A);
	puts("");
	
	printf("visit in order:\n");
	in_ordine(A);
	puts("");
	
	printf("visit in post-order:\n");
	post_ordine(A);
	puts("");
	
	
	return 0;
}


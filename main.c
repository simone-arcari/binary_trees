/**
 * @file	main.c
 * @author	Simone Arcari
 *
 * @abstract	main file
 * @discussion	This file contains some examples of use of the binary_tree 
 *		library.
 */



#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"



int main(void) {
	
	/* make some node */
	btree_t *A = Tree(1);
	btree_t *B = Tree(2);
	btree_t *C = Tree(3);
	btree_t *D = Tree(4);
	btree_t *E = Tree(5);
	btree_t *F = Tree(6);
	btree_t *G = Tree(7);
	
	/* make tree */
	insert_left(A,B);
	insert_left(B,C);
	insert_right(B,D);
	insert_right(A,E);
	insert_left(E,F);
	insert_right(E,G);
	
	puts("");
	printf("the number of node is: %d\n\n", count_nodes(A) );
	
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


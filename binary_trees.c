#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"


btree_t *Tree(int val) {
	
	btree_t *new = malloc(sizeof(btree_t));
	
	new->parent = NULL;
	new->left = NULL;
	new->right = NULL;
	new->data = val;
	
	return new;
}

btree_t *insert_left(btree_t *P, btree_t *T) {
	
	if(P->left == NULL) {
		T->parent = P;
		P->left = T;
		return T;
	}
	
	return NULL;
}

btree_t *insert_right(btree_t *P, btree_t *T) {
	
	if(P->right == NULL) {
		T->parent = P;
		P->right = T;
		return T;
	}
	
	return NULL;
}

void delete_left(btree_t *T) {

	if(T->left != NULL) {
	
		delete_left(T->left);
		delete_right(T->left);
		
		free(T->left);
		T->left = NULL;
	}
}

void delete_right(btree_t *T) {

	if(T->right != NULL) {
	
		delete_left(T->right);
		delete_right(T->right);
		
		free(T->right);
		T->right = NULL;
	}
}

void pre_ordine(btree_t *T) {
/*
	@descr: visita tutti i nodi dell'albero 
	@param T: puntatore ad un nodo (albero)
*/
	if(T!=NULL) {
		printf("data: %d\n", T->data);
		pre_ordine(T->left);
		pre_ordine(T->right);
	}
	return;
}

void in_ordine(btree_t *T) {
/*
	@descr: visita tutti i nodi dell'albero
	@param: puntatore ad un nodo (albero)
*/
	if(T!=NULL) {
		in_ordine(T->left);
		printf("data: %d\n", T->data);
		in_ordine(T->right);
	}
	return;
}

void post_ordine(btree_t *T) {
/*
	@descr: visita tutti i nodi dell'albero
	@param: puntatore ad un nodo (albero)
*/
	if(T!=NULL) {
		post_ordine(T->left);
		post_ordine(T->right);
		printf("data: %d\n", T->data);
	}
	return;
}

int count_nodes(btree_t *T) {
/*
	@descr: visitiamo l'albero tenendo conto di quiìanti nodi abbimo letto
	@param: puntatore ad un nodo (albero)
*/
	if(T==NULL) {
		return 0;
	}else {
		int count_l = count_nodes(T->left);
		int count_r = count_nodes(T->right);

		return count_l + count_r + 1;
	}
}


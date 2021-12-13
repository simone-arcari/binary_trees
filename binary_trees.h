/**
 * @file	binary_trees.h
 * @author	Simone Arcari
 *
 * @abstract	header file
 * @discussion	This file contains the definitions of the structs and functions
 *		needed to work with binary tree data structures.
 */


#ifndef BINARY_TREES_H_
#define BINARY_TREES_H_


/**
 * @typedef	btree_t
 *		Contains all node properties. Each node stores information and 
 *		has pointers to be linked to the other nodes to form a tree 
 *		structure.
 *
 * @field	data	information that the node stores
 * @field	parent	link to the parent node
 * @field	left	link to the first child node
 * @field	right	link to the second child node
*/
typedef struct btree {
	int data;
	struct btree *parent;
	struct btree *left;
	struct btree *right;
} btree_t;


/* FUNCTIONS FOR THE TREE STRUCTURE */
btree_t *Tree(int val);

btree_t *insert_left(btree_t *P, btree_t *T);
btree_t *insert_right(btree_t *P, btree_t *T);

void delete_left(btree_t *T);
void delete_right(btree_t *T);

void pre_ordine(btree_t *T);
void in_ordine(btree_t *T);
void post_ordine(btree_t *T);

int count_nodes(btree_t *T);


#endif /* BINARY_TREES_H_ */

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
 * @typedef	tree_t
 *		Contains all node properties. Each node stores information and 
 *		has pointers to be linked to the other nodes to form a tree 
 *		structure.
 *
 * @field	data	information that the node stores
 * @field	parent	link to the parent node
 * @field	left	link to the first child node
 * @field	right	link to the second child node
*/
typedef struct node {
	int data;
	struct node *parent;
	struct node *left;
	struct node *right;
} node_t;


/* FUNCTIONS FOR THE TREE STRUCTURE */
node_t *Tree(int val);
node_t *insert_left(node_t *P, node_t *T);
node_t *insert_right(node_t *P, node_t *T);
void delete_left(node_t *T);
void delete_right(node_t *T);
void pre_ordine(node_t *T);
void in_ordine(node_t *T);
void post_ordine(node_t *T);
int conta_nodi(node_t *T);


#endif /* BINARY_TREES_H_ */

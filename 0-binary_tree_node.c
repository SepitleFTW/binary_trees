#include "binary_trees.h"
/**
 * binary_tree_node - this function creates
 * a binary tree node.
 * @parent: the parent node to be created
 * @value: the value to put inside the new node
 * Return: Null if an error occures
 * else return pointer to the new node
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)

{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}


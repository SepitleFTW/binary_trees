#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert a nnode into the tree
 * of another binary to right child
 * @parent: pointer to insert node to right child
 * @value: value to store inside the node
 * Return: Null if an error occurs or point
 * to the new node
 * Description: if parent has a right child new node
 * should take its place and old right child is set
 * as new right child
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;

	return (new);
}

#include "binary_trees.h"

/**
 * binary_tree_sibling - Locates the sibling of a given node in a binary tree.
 * @node: A pointer to the node to find the sibling of.
 *
 * Return: If node is NULL or has no sibling, returns NULL.
 *         Otherwise, returns a pointer to the sibling.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	/* If node is NULL or has no parent, it has no sibling */
	if (node == NULL || node->parent == NULL)
		return (NULL);

	/* If node is the left child, return the right child as sibling */
	if (node->parent->left == node)
		return (node->parent->right);

	/* If node is the right child, return the left child as sibling */
	return (node->parent->left);
}

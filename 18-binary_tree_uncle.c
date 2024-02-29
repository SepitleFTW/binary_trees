#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a given node in a binary tree.
 * @node: A pointer to the node to find the uncle of.
 *
 * Return: If node is NULL, has no parent, or no grandparent, returns NULL.
 *         Otherwise, returns a pointer to the uncle node.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	/* If node is NULL or has no parent or grandparent, it has no uncle */
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	/** If parent's parent's left child is
    *the parent, return right child as uncle
    */
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);

	/* If parent's parent's right child is the parent,
    *return left child as uncle
    */
	return (node->parent->parent->left);
}

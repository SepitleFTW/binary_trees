#include "binary_trees.h"

/**
*binary_tree_postorder - Traverses a binary
*tree using post-order traversal.
*@tree: A pointer to the root node
*of the tree to traverse.
*@func: A pointer to a function to call for each node.
*Description: This function recursively
*traverses a binary tree using
*post-order traversal. It executes
*the provided function for each node,
*passing the value stored in the node
*as a parameter to the function.
*If either the tree pointer or the
*function pointer is NULL, the function
*does nothing.
*/

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}

#include "binary_trees.h"

/**
 * binary_tree_height - the height of the binary tree
 * @tree: pointer to the root of the tree
 * Return: if tree == NULL return 0
 * else return height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if(tree)
	{
		size_t lima = 0, roger = 0;

		lima = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		roger = tree->right? 1 + binary_tree_height(tree->right) : 0;
		return ((lima > roger)) ? lima : roger;
	}
	return (0);
}

#include "binary_trees.h"

/**
 * binary_tree_depth = measures the depth of the node
 * in the associated binary tree
 * @tree: pointer tp the node to measure depth
 * Return: if tree == NULL then return 0
 * else return depth of the node
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
    return((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}

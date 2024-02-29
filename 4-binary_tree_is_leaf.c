#include "binary_trees.h"

/**
 * binary_tree_is_leaf - this checks if a node
 * is a leaf od the binary tree
 * @node: this is a pointer to the node that
 * must be checked
 * Return: 1 if is leaf
 * else return 0
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
    {if (node == NULL)
    return (0);
    }

    {if (node->left != NULL)
    return (0);
    }

    {if (node->right!= NULL)
    return (0);
    }


    return (1);
}

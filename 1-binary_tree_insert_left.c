#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert a nnode into the tree
 * of another binary to left child
 * @parent: pointer to insert node to left child
 * @value: value to store inside the node
 * Return: Null if an error occurs or point
 * to the new node
 * Description: if parent has a left child new node
 * should take its place and old left child is set
 * as new left child
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_ *new;

    if (parent == NULL)
        return (NULL);

    new = binary_tree_node(parent, value);
    if (new == NULL)
    return (NULL);

    if (parent->left != NULL)
    {
        new->left = parent->left;
        parent->left->parent = new;
    }
    parent->left = new;
    return (new);
}

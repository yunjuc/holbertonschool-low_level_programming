#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * binary_tree_sibling - find sibling of a node
 * @node: pointer to the node to be checked
 * Return: pointer to the sidling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	else
		return (node->parent->left);
}

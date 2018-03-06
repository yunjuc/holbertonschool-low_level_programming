#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_tree_is_leaf - check if a node is leaf
 * @node: pointer to the node to check
 * Return: 1 if a node, 0 otherwise
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	else if (node->left != NULL)
		return (0);
	else if (node->right != NULL)
		return (0);
	else
		return (1);
}

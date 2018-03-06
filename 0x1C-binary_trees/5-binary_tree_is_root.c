#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_tree_is_root - check if a node is root
 * @node: pointer to the node to check
 * Return: 1 if a node, 0 otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	else if (node->parent == NULL)
		return (1);
	else
		return (0);
}

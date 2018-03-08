#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * binary_tree_is_full - check if a tree is full
 * @tree: root node of the tree to check
 * Return: 1 if is full, otherwise 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (binary_tree_is_full(tree->left) == binary_tree_is_full(tree->right))
		return (1);
	else
		return (0);
}

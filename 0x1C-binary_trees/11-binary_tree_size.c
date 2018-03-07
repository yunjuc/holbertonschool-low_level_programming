#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * binary_tree_size - measure size of a binary tree
 * @tree: pointer to the root node
 * Return: size of the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0, left = 0, right = 0;

	if (tree == NULL)
		return (0);
	left = binary_tree_size(tree->left) + 1;
	right = binary_tree_size(tree->right);
	size = left + right;
	return (size);
}

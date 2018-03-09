#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int binary_tree_is_full(const binary_tree_t *tree);

/**
 * binary_tree_is_complete - checks if a binary tree is complete
 * @tree: pointer to the root node
 * Return: 1 if complete, 0 if not complete
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (binary_tree_is_full(tree) == 1)
		return (1);
	else
		return (0);
}

/**
 * binary_tree_is_full - check if a tree is full
 * @tree: root node of the tree to check
 * Return: 1 if is full, otherwise 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (1);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if ((tree->left) && (tree->right))
		return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));
	return (0);
}

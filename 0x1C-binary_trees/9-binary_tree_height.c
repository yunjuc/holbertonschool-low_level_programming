#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

size_t tree_height(const binary_tree_t *node);

/**
 * binary_tree_height - measure height of a binary tree
 * @tree: pointer to the root node
 * Return: height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height = 0;

	if (tree == NULL)
		return (0);
	height = tree_height(tree) - 1;

	return (height);
}

/**
 * tree_height - count distance between node and root
 * @node: node to the root node
 * Return: height count
 */
size_t tree_height(const binary_tree_t *node)
{
	size_t count = 0, right, left;

	if (node == NULL)
		return (0);
	left = tree_height(node->left);
	right = tree_height(node->right);
	if (left > right)
		count = left + 1;
	else
		count = right + 1;
	return (count);
}

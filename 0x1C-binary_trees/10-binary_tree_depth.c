#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

size_t tree_depth(const binary_tree_t *node);

/**
 * binary_tree_depth - measure depth of a binary tree
 * @tree: pointer to the root node
 * Return: depth of the tree
 */
size_t binary_tree_depth(const binary_tree_t *node)
{
	size_t depth = 0;

	if (node == NULL)
		return (0);
	depth = tree_depth(node) - 1;
 
	return (depth);
}

/**
 * tree_depth - depth of the tree
 * @tree: pointer to the root node
 * Return: height of the tree
 */
size_t tree_depth(const binary_tree_t *node)
{
	size_t count = 1;

	if (node == NULL)
		return (0);
	count += tree_depth(node->parent);

	return (count);
}

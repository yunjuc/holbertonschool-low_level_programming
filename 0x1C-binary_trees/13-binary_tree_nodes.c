#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

size_t binary_tree_size(const binary_tree_t *tree);
size_t binary_tree_leaves(const binary_tree_t *tree);

/**
 * binary_tree_nodes - count nodes of a binary tree
 * @tree: root node to start the counting
 * Return: number of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);
	count = binary_tree_size(tree) - binary_tree_leaves(tree);

	return (count);
}

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

/**
 * binary_tree_leaves - counts leaves of a binary tree
 * @tree: pointer to the root node
 * Return: number of leaves of the tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL || tree->right == NULL)
		return (1);
	else
		return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}

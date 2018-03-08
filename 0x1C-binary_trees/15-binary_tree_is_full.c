#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

int tree_height(const binary_tree_t *node);
size_t binary_tree_leaves(const binary_tree_t *tree);

/**
 * binary_tree_is_full - check if a tree is full
 * @tree: root node of the tree to check
 * Return: 1 if is full, otherwise 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree_height(tree->left) == tree_height(tree->right) &&
	binary_tree_leaves(tree->left) == binary_tree_leaves(tree->right))
		return (1);
	else
		return (0);
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

/**
 * tree_height - count distance between node and root
 * @node: node to the root node
 * Return: height count
 */
int tree_height(const binary_tree_t *node)
{
	int count = 0, right, left;

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

#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

int tree_height(const binary_tree_t *node);

/**
 * binary_tree_height - measure height of a binary tree
 * @tree: pointer to the root node
 * Return: height of the tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int balance = 0;

	if (tree == NULL)
		return (0);
	balance = tree_height(tree->left) - tree_height(tree->right);

	return (balance);
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

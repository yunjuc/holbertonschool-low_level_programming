#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

int binary_tree_is_full(const binary_tree_t *tree);
int tree_height(const binary_tree_t *node);
int binary_tree_balance(const binary_tree_t *tree);

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node
 * Return: 1 if perfect, 0 if not perfect
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (binary_tree_is_full(tree) == 1 && binary_tree_balance(tree) == 0)
		return (1);
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
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if ((tree->left) && (tree->right) && binary_tree_balance(tree) == 0)
		return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));
	return (0);
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

/**
 * binary_tree_balance - measure height of a binary tree
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

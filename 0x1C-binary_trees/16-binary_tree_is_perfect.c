#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

int binary_tree_balance(const binary_tree_t *tree);
int binary_tree_is_full(const binary_tree_t *tree);

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
	else
		return (0);
}

size_t binary_tree_size(const binary_tree_t *tree);
size_t binary_tree_leaves(const binary_tree_t *tree);
size_t binary_tree_nodes(const binary_tree_t *tree);


/**
 * binary_tree_is_full - check if a tree is full
 * @tree: root node of the tree to check
 * Return: 1 if is full, otherwise 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int result = 0;

	if (tree == NULL)
		return (0);
	result = binary_tree_leaves(tree) - binary_tree_nodes(tree);

	return (result);
}

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

int tree_height(const binary_tree_t *node);

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

#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_tree_insert_right - insert a right child node
 * @parent: pointer to parent node
 * @value: value of the node
 * Return: pointer to the new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;

	return (new);
}

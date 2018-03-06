#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_tree_node - create a new node
 * @parent: pointer to parent node
 * @value: value of the node
 * Return: pointer to the new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}

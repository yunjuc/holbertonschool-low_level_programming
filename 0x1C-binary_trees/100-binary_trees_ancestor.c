#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * binary_trees_ancestor - find the lowest common ancestor of two nodes
 * @first: pointer to first node
 * @second: pointer to second node
 * Return: pointer to the ancestor, NULL if there is none
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second)
{
	if (first == NULL || second == NULL)
		return (NULL);
	if (first == second->parent)
		return ((binary_tree_t *)first);
	if (second == first->parent)
		return ((binary_tree_t *)second);
	if (binary_trees_ancestor(first->parent, second->parent) ==
	binary_trees_ancestor(first->parent, second->parent))
		return (first->parent);
	else
		return (NULL);
}

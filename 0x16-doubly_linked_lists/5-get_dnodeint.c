#include "lists.h"

/**
 * get_dnodeint_at_index - return a node by index
 * @head: pointer to list head
 * @index: node index
 * Return: pointer to index node, or NULL if node doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = head;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	while (node->next != NULL)
	{
		if (count == index)
			return (node);
		node = node->next;
		count++;
	}
	return (NULL);
}

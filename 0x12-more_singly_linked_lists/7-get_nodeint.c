#include "lists.h"
#include <stdio.h>

/**
 * get_nodeint_at_index - get a node from a list
 * @head: pointer to list head
 * @index: index node
 * Return: pointer to index node; NULL if node is NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr = head;
	unsigned int i = 0;

	while (i < index)
	{
		if (ptr == NULL)
			return (NULL);
		ptr = ptr->next;
		i++;
	}
	return (ptr);
}

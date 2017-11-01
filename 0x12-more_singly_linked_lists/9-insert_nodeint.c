#include "lists.h"
#include <stdio.h>

/**
 * insert_nodeint_at_index - insert node into list
 * @head: pointer to list head
 * @idx: node index
 * @n: node data
 * Return: address of new node; NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new, *current = *head;
	unsigned int i = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	while (i + 1 < idx)
	{
		if (current == NULL)
			return (NULL);
		current = current->next;
		i++;
	}
	temp = current->next;
	current->next = new;
	new->n = n;
	new->next = temp;
	return (new);
}

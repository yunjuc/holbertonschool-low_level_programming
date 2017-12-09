#include "lists.h"

/**
 * insert_dlistint - insert new node to a list
 * @head: pointer to list head
 * @idx: node index
 * @n: node data
 * Return: address of the new node, or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp = *h;
	unsigned int count = 0;

	if (h == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	while (temp != NULL)
	{
		if (count == idx)
		{
			new->n = n;
			if (count == 0)
			{
				new->prev = NULL;
				*h = new;
			}
			else
			{
				new->prev = temp->prev;
				temp->prev->next = new;
			}
			new->next = temp;
			return (new);
		}
		temp = temp->next;
		count++;
	}
	return (NULL);
}

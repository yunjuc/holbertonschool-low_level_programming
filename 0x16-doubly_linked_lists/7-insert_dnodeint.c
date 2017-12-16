#include "lists.h"

/**
 * insert_dnodeint_at_index - insert new node to a list
 * @h: pointer to list head
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
	if (*h == NULL && idx == 0)
	{
		new = add_dnodeint(&(*h), n);
		return (new);
	}
	while (temp != NULL)
	{
		if (count == idx || (count + 1 == idx && temp->next == NULL))
		{
			if (count + 1 == idx && temp->next == NULL)
				new = add_dnodeint_end(&(*h), n);
			else if (idx == 0)
				new = add_dnodeint(&(*h), n);
			else
			{
				new->n = n;
				new->next = temp;
				new->prev = temp->prev;
				temp->prev->next = new;
				temp->prev = new;
			}
			return (new);
		}
		temp = temp->next;
		count++;
	}
	return (NULL);
}

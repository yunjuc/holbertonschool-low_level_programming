#include "lists.h"

/**
 * dlistint_len - return number of  elements in a list
 * @h: pointer to list head
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		h = h->next;
		num++;
	}
	return (num);
}

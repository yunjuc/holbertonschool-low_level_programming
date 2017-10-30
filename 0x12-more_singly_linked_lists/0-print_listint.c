#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print elements in a list
 * @h: pointer to list head
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int size = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		size++;
	}
	return (size);
}

#include "lists.h"
#include <stdio.h>

/**
 * listint_len - print list length
 * @h: pointer to list head
 * Return: number of elements in list
 */
size_t listint_len(const listint_t *h)
{
	unsigned int size = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		h = h->next;
		size++;
	}
	return (size);
}

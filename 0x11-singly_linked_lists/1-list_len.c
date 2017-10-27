#include "lists.h"

/**
 * list_len - list number of elements in a list
 * @h: pointer to list head
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	unsigned int size;

	while (h != NULL)
	{
		h = h->next;
		size++;
	}
	return (size);
}

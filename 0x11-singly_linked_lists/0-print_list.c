#include "lists.h"

/**
 * print_list - print elements in a list
 * @h: pointer to list head
 * Return: number of elements
 */
size_t print_list(const list_t *h)
{
	unsigned int size = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		size++;
	}
	return (size);
}

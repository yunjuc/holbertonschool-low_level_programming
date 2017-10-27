#include "lists.h"

/**
 * print_list - print elements in a list
 * @h: pointer to list head
 * Return: number of elements
 */
size_t print_list(const list_t *h)
{
	unsigned int size;

	while (h != NULL)
	{
/*
		if (h->str == NULL)
		{
			temp->str = "(nil)";
			temp->len = 0;
		}
*/
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		size++;
	}
	return (size);
}

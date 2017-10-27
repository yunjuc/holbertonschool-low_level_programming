#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * free_list - free list_t list
 * @head: pointer to list head
 * Return: 0
 */
void free_list(list_t *head)
{
	list_t *current = head;
	list_t *temp;

	while (current->next != NULL)
	{
		temp = current;
		current = current->next;
		free(temp->str);
		free(temp);
	}
	free(current->str);
	free(current);
}

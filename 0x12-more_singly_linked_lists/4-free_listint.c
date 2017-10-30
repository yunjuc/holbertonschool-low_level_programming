#include "lists.h"
#include <stdio.h>

/**
 * free_listint - free a list
 * @head: pointer to list head
 * Return: 0
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while(head->next != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	free(head);
}

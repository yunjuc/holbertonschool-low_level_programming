#include "lists.h"
#include <stdio.h>

/**
 * pop_listint - remove head node from a list
 * @head: pointer to list head
 * Return: data of head node; 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	int n = (*head)->n;
	listint_t *temp = *head;

	if (*head == NULL)
		return (0);
	if (head != NULL || *head != NULL)
		*head = (*head)->next;
	free(temp);
	return (n);
}

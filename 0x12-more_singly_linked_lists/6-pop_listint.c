#include "lists.h"
#include <stdio.h>

/**
 * pop_listint - remove head node from a list
 * @head: pointer to list head
 * Return: data of head node; 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);
	temp = *head;
	n = (*head)->n;
	*head = (*head)->next;
	free(temp);
	return (n);
}

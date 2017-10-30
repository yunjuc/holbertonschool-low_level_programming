#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint_end - add node to the end
 * @head: pointer to list head
 * @n: data of new node
 * Return: pointer to new node; NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
		*head = new;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
	new->n = n;
	new->next = NULL;
	return (new);
}

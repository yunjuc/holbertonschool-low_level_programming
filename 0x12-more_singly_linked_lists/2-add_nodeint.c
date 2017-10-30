#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - add node to a list
 * @head: pointer to list head
 * @n: data of new node 
 * Return: pointer to new node; NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}

#include "lists.h"

/**
 * add_dnodeint - add new node to the beginning of a list
 * @head: pointer to list head
 * @n: value of new node
 * Return: address of the new node, or NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return(NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (new->next != NULL)
		new->next->prev = new;
	*head = new;
	return (new);
}

#include "lists.h"

/**
 * add_dnodeint_end - add new node to the end of a list
 * @head: pointer to list head
 * @n: value of new node
 * Return: address of the new node, or NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp= *head;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return(NULL);

	if (*head == NULL)
	{
		*head = new;
		new->prev = NULL;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
		new->prev = temp;
	}
	new->n = n;
	new->next = NULL;
	return (new);
}

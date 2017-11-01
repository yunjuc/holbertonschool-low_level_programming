#include "lists.h"
#include <stdio.h>

listint_t *add_nodeint(listint_t **head, const int n);

/**
 * insert_nodeint_at_index - insert node into list
 * @head: pointer to list head
 * @idx: node index
 * @n: node data
 * Return: address of new node; NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new, *current;
	unsigned int i = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	if ((head == NULL || *head == NULL) && idx == 0)
	{
		new = add_nodeint(&(*head), n);
		return (new);
	}
	else if ((head == NULL || *head == NULL) && idx != 0)
		return (NULL);
	if (idx == 0)
	{
		new = add_nodeint(&(*head), n);
		return (new);
	}
	current = *head;
	while (i + 1 < idx)
	{
		if (current == NULL)
			return (NULL);
		current = current->next;
		i++;
	}
	temp = current->next;
	current->next = new;
	new->n = n;
	new->next = temp;
	return (new);
}

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

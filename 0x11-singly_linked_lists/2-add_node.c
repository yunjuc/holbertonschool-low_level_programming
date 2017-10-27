#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - add node to a list
 * @head: pointer to list head
 * @str: string to be copied
 * Return: pointer to new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;
	return (*head);
}

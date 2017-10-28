#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - add node to list end
 * @head: pointer to list head
 * @str: string to be copied
 * Return: pointer to new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
		*head = new;
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new;
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;
	return (new);
}

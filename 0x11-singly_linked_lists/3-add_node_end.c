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
	list_t *temp = *head;
	list_t *new;

	if (*head == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new->next == NULL)
		return (NULL);
	while (temp->next != NULL);
		temp = temp->next;
	temp->next = new;
	new->next->str = strdup(str);
	new->next->len = strlen(str);
	new->next->next = NULL;
	return (new);
}

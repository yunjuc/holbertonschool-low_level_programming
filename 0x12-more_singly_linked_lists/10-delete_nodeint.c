#include "lists.h"
#include <stdio.h>

/**
 * delete_nodeint_at_index - delete node from a list
 * @head: pointer to list head
 * @index: node index
 * Return: 1 if succeeded, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *current = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = (*head)->next;
		*head = temp;
		free(current);
	}
	else
	{
		while (i + 1 < index)
		{
			if (current == NULL)
				return (-1);
			current = current->next;
			i++;
		}
		temp = current->next;
		current->next = current->next->next;
		free(temp);
	}
	return (1);
}


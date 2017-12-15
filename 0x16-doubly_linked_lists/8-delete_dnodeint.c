#include "lists.h"

/**
 * delete_dnodeint_at_index - delete index node from a list
 * @head: pointer to list head
 * @index: node index
 * Return: 1 when succeeded, -1 when failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int count = 0;

	if (head == NULL && *head == NULL)
		return (-1);

	while (temp != NULL)
	{
		if (count == index)
		{
			if (count == 0)
			{
				if (temp->next == NULL)
					*head = NULL;
				else
				{
					temp->next->prev = NULL;
					*head = temp->next;
				}
			}
			else
			{
				if (temp->next == NULL)
					temp->prev->next = NULL;
				else
					temp->prev->next = temp->next;
			}
			free(temp);
			return (1);
		}
		temp = temp->next;
		count++;
	}
	return (-1);
}

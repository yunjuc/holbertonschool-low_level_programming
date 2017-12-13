#include "lists.h"

/**
 * sum_dlistint - return sum of a list
 * @head: pointer to list head
 * Return: sum of the data
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;
	int sum = 0;

	if (head == NULL)
		return (0);

	while (node != NULL)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}

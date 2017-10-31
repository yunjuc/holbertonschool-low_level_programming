#include "lists.h"
#include <stdio.h>

/**
 * sum_listint - sum all data in the list
 * @head: pointer to list head
 * Return: sum of all data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head->next != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	sum += head->n;
	return (sum);
}

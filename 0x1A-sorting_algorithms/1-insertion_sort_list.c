#include "sort.h"
#include <stdio.h>

/**
 * insertion_sort: bubble sort algorithm
 * @list: pointer to a doubly linked link
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *head, *swap, *temp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	head = (*list)->next;
	while (head)
	{
		if (head->n < head->prev->n)
		{
			swap = head;
			while (swap->prev && swap->n < swap->prev->n)
			{
				temp = swap->prev;
				if (temp->prev)
					temp->prev->next = swap;
				swap->prev = temp->prev;
				temp->next = swap->next;
				if (swap->next)
					swap->next->prev = temp;
				swap->next = temp;
				temp->prev = swap;
				if (swap->prev == NULL)
					*list = swap;
				print_list(*list);	
			}
			
		}
		head = head->next;
	}
}


#include "sort.h"
#include <stdio.h>

/**
 * insertion_sort: bubble sort algorithm
 * @list: pointer to a doubly linked link
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *start, *swap, *temp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	start = *list;
	while (start != NULL)
	{
		if (start->next != NULL && start->next->n < start->n)
		{
			swap = start->next;
			if (swap->next != NULL)
				swap->next->prev = start;
			if (start->prev != NULL)
				start->prev->next = swap;
			start->next = swap->next;
			swap->prev = start->prev;
			start->prev = swap;
			swap->next = start;
			print_list(*list);
			while (swap->prev != NULL)
			{
				printf("{%d}", swap->n);
				if (swap->prev->n > swap->n)
				{
					temp = swap->prev;
					if (temp->prev != NULL)
						temp->prev->next = swap;
					if (swap->next != NULL)
						swap->next->prev = temp;
					swap->prev = temp->prev;
					temp->next = swap->next;
					swap->next = temp;
					temp->prev = swap;
					print_list(*list);
				}
				swap = swap->prev;
			}
		}
		start = start->next;
	}	
}

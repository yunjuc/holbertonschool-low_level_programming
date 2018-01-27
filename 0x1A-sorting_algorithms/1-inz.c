#include "sort.h"
#include <stdio.h>

/**
 * swap: swaps two nodes
 * @a: 1st node
 * @b: 2nd node
 *
 * Return: void
 */
void swap(listint_t **list, listint_t *a, listint_t *b)
{
//	printf("swapping right[%d] and left[%d]\n", a->n, b->n);
	if (a == NULL || b == NULL || list == NULL || *list == NULL)
		return;

	if (b->prev)
		b->prev->next = a;
	a->prev = b->prev;
	b->next = a->next;
	if (a->next)
		a->next->prev = b;
	a->next = b;
	b->prev = a;
	if (a->prev == NULL)
		*list = a;
	print_list(*list);
}
/**
 * insertion_sort: bubble sort algorithm
 * @list: pointer to a doubly linked link
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *left_head, *right_head, *temp1, *temp2;
	int flag = 1;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	left_head = *list;
	right_head = (*list)->next;

	while (right_head != NULL)
	{
		if (left_head->n > right_head->n)
		{
			temp1 = right_head;
			right_head = right_head->next;
			swap(list, temp1, left_head);
			while (temp1->prev && temp1->n < temp1->prev->n)
			{
				temp2 = temp1->prev;
				swap(list, temp1, temp2);
			}
			if (right_head && left_head->n > right_head->n)
			{
				temp1 = right_head;
				right_head = right_head->next;
				swap(list, temp1, left_head);
				while (temp1->n < temp1->prev->n)
				{
					temp2 = temp1->prev;
					swap(list, temp1, temp2);
					if (temp1 == *list)
					{
						flag = 0;
						break;
					}
					flag = 1;
				}
			}
		}
		if (right_head)
		{
			if (flag && right_head->next)
			{
				left_head = left_head->next;
				right_head = right_head->next;
			}
		}
	}
}


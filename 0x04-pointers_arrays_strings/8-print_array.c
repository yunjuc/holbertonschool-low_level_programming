#include "holberton.h"
#include <stdio.h>

/**
 * print_array - print an array
 * @a: starting address of array
 * @n: size of array
 *
 * Description: take an array and print all values in the array
 * Return: 0
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
			printf("%d", *(a + i));
		else
			printf("%d, ", *(a + i));
	}
	printf("\n");
}

#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - print sums of diagonal integers of a matrix
 * @a: row of matrix
 * @size: column of matrix
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum1, sum2;

	sum1 = 0;
	for (i = 0; i < size * size ; i += size + 1)
		sum1 += *(a + i);
	sum2 = 0;
	for (j = size - 1; j < size * (size - 1) + 1 ; j += size - 1)
		sum2 += *(a + j);
	printf("%d, %d\n", sum1, sum2);
}

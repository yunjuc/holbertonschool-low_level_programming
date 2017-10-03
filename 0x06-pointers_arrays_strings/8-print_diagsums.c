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

	for (i = 0, j = 0 ; i < size && j < size ; i++, j++)
		sum1 += a[i][j];
	for (i = size, j = size; i > 0 && j > 0 ; i--, j--)
		sum2 += a[i][j];
	printf("%d, %d", sum1, sum2);
}

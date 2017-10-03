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
	int sum1, sum2;

	for (*a = 0 ; *a < size ; a++)
		sum1 += *a;
	for (*a = size; *a > 0 ; a--)
		sum2 += *a;
	printf("%d, %d\n", sum1, sum2);
}

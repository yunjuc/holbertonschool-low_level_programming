#include "holberton.h"
#include <stdio.h>

/**
 * prnt-diagsums - print sums of diagonal integers of a matrix
 * @a: row of matrix
 * @size: column of matrix
 * Return: 0
 */
void print_diagsums(int *a int size)
{
	int i, j;

	for (i = 0 ; i < 8 ; i++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);
		_putchar('\n');
	}
}

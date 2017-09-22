#include "holberton.h"

/**
 * print_diagonal - print diagonal line
 * @n: number of diagonal line to print
 *
 * Description: print \ based on @n input
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0 ; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}

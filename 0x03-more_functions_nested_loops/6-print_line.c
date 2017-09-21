#include "holberton.h"

/**
 * print_line - print lines
 * @n: number of line to print
 *
 * Description: print _ based on @n input
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
		;
	else
	{
		for (i = 1 ; i <= n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}

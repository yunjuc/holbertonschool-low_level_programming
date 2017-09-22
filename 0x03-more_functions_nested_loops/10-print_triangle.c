#include "holberton.h"

/**
 * print_triangle - print triagle
 * @size: size of triangle
 *
 * Description: print triangle the size of @size input
 */
void print_triangle(int size)
{
	int i, j, t;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size - i - 1; j++)
			{
				_putchar(' ');
			}
			for (t = 0; t <= i ; t++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

#include "holberton.h"

/**
 * print_alphabet_x10 - print alphabet letters x10
 */

void print_alphabet_x10(void)
{
	int i, j;

	i = 0;

	while (i < 10)
	{
		j = 'a';
		while (j < 'z')
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
		i++;
	}
}

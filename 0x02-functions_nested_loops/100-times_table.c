#include "holberton.h"

/**
 * print_times_table - print times table 15 times
 * @c: number of time to print
 *
 * Description: take a number n and print n*n times table
 */
void print_times_table(int c)
{
	int i, j, product;

	if (c <= 15 && c >= 0)
	{
		for (i = 0; i <= c; i++)
		{
			for (j = 0; j <= c; j++)
			{
				product = i * j;

				if (j == 0)
					_putchar('0');
				else
				{
		 			if (product / 100 == 0)
						_putchar(' ');
					else
						_putchar(product / 100 + '0');
					if (product / 100 == 0 && product / 10 % 10 == 0)
						_putchar(' ');
					else
						_putchar(product / 10 % 10 + '0');
					_putchar(product % 10 + '0');
				}
				if (j == c)
					;
				else
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
	else
	return ;
}

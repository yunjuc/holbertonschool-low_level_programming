#include "holberton.h"

/**
 * times_table - print times table
 */
void times_table(void)
{
	int i, j, k, f, l;

	i = 0;
	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			k = i * j;
			f = k / 10;
			l = k % 10;

			if (j == 0)
			{
				_putchar(48);
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				if (f == 0)
				_putchar(' ');
				else
				{
					_putchar(f + 48);
				}
				_putchar(l + 48);
				if (j == 9)
				;
				else
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}

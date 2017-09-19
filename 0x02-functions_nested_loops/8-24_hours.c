#include "holberton.h"

/**
 * jack_bauer - count 24hrs in minutes
 */
void jack_bauer(void)
{
	int i, j, t, n;

	i = '0';

	while (i <= '2')
	{
		j = '0';
		while (j <= '9')
		{
			t = '0';
			while (t < '6')
			{
				n = '0';
				while (n <= '9')
				{
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(t);
					_putchar(n);
					_putchar('\n');
					n++;
				}
				t++;
			}
			j++;
		}
		i++;
	}

	i = '2';
	j = '0';

	while (j < '4')
	 {
		t = '0';
		while (t < '6')
		{
			n = '0';
			while (n <= '9')
			{
				_putchar(i);
				_putchar(j);
				_putchar(':');
				_putchar(t);
				_putchar(n);
				_putchar('\n');
				n++;
			}
			t++;
		}
		j++;
	}

}

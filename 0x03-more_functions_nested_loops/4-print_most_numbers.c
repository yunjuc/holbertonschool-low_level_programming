#include "holberton.h"

/**
 * print_most_numbers - print numbers other than 2 & 4
 */
void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i == '2' || i == '4')
			;
		else
		_putchar(i);
	}
	_putchar('\n');
}

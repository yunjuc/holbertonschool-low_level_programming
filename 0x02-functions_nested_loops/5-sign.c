#include "holberton.h"

/**
 * print_sign - check and print sign
 * @c: char to be checked
 *
 * Description: check value of input and print 0/0, 1/+, or -1/-
 * Return: 1 - int is greater than 0
 *         0 - int is 0
 *         -1 - int is less than 0
 */
int print_sign(int c)
{
	if (c > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (c == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

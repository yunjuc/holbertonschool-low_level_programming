#include "holberton.h"

/**
 * print_last_digit - print last digital
 * @c: number to be checked
 *
 * Description: check the input and return last digit
 * Return: int
 */
int print_last_digit(int c)
{
	int a;

	a = c % 10;

	if (a < 0)
		a = 0 - a;

	_putchar (a + '0');
	return (a);
}

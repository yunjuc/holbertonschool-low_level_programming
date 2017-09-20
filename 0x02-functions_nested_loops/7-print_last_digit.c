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
	if (c < 0)
	c = 0 - c;

	_putchar (c % 10 + '0');
	return (c % 10);
}

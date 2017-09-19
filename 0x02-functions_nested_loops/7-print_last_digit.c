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
	int i;

	i = c % 10;
	_putchar(i + 48);
	return (i);

}

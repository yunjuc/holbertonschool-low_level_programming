#include "holberton.h"
#include <stdio.h>

/**
 * print_binary - print unsigned int in binary
 * @n: unsigned int
 * Return: 0
 */
void print_binary(unsigned long int n)
{
	unsigned int mask = 1;

	while (mask < n)
		mask = mask << 1;
	while (mask > 0)
	{
		if ((n & mask) == 0)
			_putchar('0');
		else
			_putchar('1');
		mask = mask >> 1;
	}
}

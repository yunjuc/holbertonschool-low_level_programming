#include "holberton.h"
#include <stdio.h>

/**
 * print_binary - print unsigned int in binary
 * @n: unsigned int
 * Return: 0
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1, count = 0, temp = n;

	while (temp && (count <= 64))
	{
		temp = temp >> 1;
		count++;
	}
	mask = mask << (count - 1);
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (mask)
	{
		if ((n & mask) == 0)
			_putchar('0');
		else
			_putchar('1');
		mask = mask >> 1;
	}
}

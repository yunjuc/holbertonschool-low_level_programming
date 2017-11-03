#include "holberton.h"
#include <stdio.h>

/**
 * clear_bit - set bit value to 0 based on given index
 * @n: pointer to int
 * @index: index bit
 * Return: 1 succeed, -1 if failed
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (n == NULL)
		return (-1);
	mask = mask << index;
	*n = (~mask & *n);
	return (1);
}

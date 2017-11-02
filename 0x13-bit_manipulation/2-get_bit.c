#include "holberton.h"
#include <stdio.h>

/**
 * get_bit - return value of a given bit
 * @n: int to be tested
 * @index: index bit
 * Return: bit value, -1 if failed
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int mask = 1;
	int bit;

	mask = mask << index;
	if ((mask & n) == 0)
		bit = 0;
	else
		bit = 1;
	return (bit);
}

#include "holberton.h"
#include <stdio.h>

/**
 * flip_bits - flip bit value from n to m
 * @n: old number
 * @m: new number
 * Return: number of bits flipped to get the new number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int diff = 0;

	diff = n ^ m;
	while (diff)
	{
		if ((diff & 1) == 1)
			count++;
		diff = diff >> 1;
	}
	return (count);
}

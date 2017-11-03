#include "holberton.h"
#include <stdio.h>

/**
 * binary_to_uint - print binary to unsigned int
 * @b: pointer to string of char
 * Return: convered unsigned int; 0 if b is NULL or string is not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i = 0;

	if (b == NULL)
		return (0);
	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		num = num << 1;
		if (b[i] == '1')
			num++;
		i++;
	}
	return (num);
}

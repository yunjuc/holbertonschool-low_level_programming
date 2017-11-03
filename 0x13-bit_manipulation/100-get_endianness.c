#include "holberton.h"
#include <stdio.h>

/**
 * get_endianness - check endianness of the system
 * Return: 0 - big endian, 1 - little endian
 */
int get_endianness(void)
{
	int n = 1;
	char *check = (char *)&n;
	
	return (*check + 48);
}

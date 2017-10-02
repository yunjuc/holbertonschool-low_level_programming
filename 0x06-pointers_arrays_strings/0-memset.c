#include "holberton.h"

/**
 * _memset - fill memory with constant byte
 * @s: buffer array
 * @b: value to be filled
 * @n: size of byte
 * Description: fill byte with constant value
 * Return: array with new byte
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n ; i++)
		s[i] = b;
	return (s);
}

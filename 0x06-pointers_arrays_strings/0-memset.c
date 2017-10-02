#include "holberton.h"

/**
 * _memset - fill memory with s constant byte
 * @s: buffer array
 * @b: constant byte
 * @n: size of byte to fill
 * Description: fill n bytes in the memory pointed by s with b
 * Return: array with new byte
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n ; i++)
		s[i] = b;
	return (s);
}

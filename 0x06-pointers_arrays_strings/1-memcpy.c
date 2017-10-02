#include "holberton.h"

/**
 * _memcpy - copy byte to memory
 * @dest: destination array
 * @src: source array
 * @n: value to be copied
 * Description: fill value from source array to dest array
 * Return: dest array with new value
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n ; i++)
		dest[i] = src[i];
	return (dest);
}

#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - create an array
 * @size: size of arrary
 * @c: use c to initialize the array
 * Description: create an array of char and initialize it with c
 * Return: pointer to array
 *         NULL - size = 0
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	ptr = malloc(size * sizeof(c));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = c;
	ptr[i] = '\0';
	return (ptr);
}

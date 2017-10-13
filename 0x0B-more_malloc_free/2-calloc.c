#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - use malloc to create a string
 * @nmemb: size of memory
 * @size: declare type
 * Return: pointer to new memory location
 *         NULL - failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size / 4; i++)
		ptr[i] = 0;
	return ((void *)ptr);
}

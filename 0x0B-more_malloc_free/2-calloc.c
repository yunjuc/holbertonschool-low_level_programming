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
	void *ptr;

	if (nmemb == 0)
	{
		free(ptr);
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	free(ptr);
	return (ptr);
}

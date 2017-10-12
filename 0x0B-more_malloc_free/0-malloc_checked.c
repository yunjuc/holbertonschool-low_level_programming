#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memory
 * @b: size of memory needed
 * Return: pointer to the memory
 *         98 - failure
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}

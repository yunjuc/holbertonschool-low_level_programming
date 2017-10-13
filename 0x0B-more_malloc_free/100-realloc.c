#include "holberton.h"
#include <stdlib.h>

/**
 * _realloc - reallocate a memory block
 * @ptr: pointer to old block
 * @old_size: old memory size
 * @new_size: new memory size
 * Return: pointer to new block
 *         NULL - failure
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p, *orig = (char *)ptr;
	unsigned int i;

	if (old_size == new_size)
		return (ptr);
	if (ptr == NULL)
		p = malloc((old_size + new_size) * sizeof(unsigned int));
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	p = malloc(new_size * sizeof(unsigned int));
	if (p == NULL)
		return (NULL);
	for (i = 0; orig[i] != '\0'; i++)
	{
		p[i] = orig[i];
		free(ptr);
	}
	return (p);
}

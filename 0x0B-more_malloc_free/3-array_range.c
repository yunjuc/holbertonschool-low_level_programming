#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - create an array
 * @min: starting number
 * @max: ending number
 * Return: pointer to new array
 *         NULL - failure
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, j;

	if (min > max)
		return (NULL);
	ptr = malloc((max - min + 1) * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (i = 0, j = min; j <= max; i++, j++)
		ptr[i] = j;
	return (ptr);
}

#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - search for an integer
 * @array: array pointer
 * @size: array size
 * @cmp: function pointer
 * Return: 1:find integer, -1:no match or size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (0);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}

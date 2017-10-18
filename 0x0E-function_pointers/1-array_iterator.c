#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - print a name
 * @array: array pointer
 * @size: size of array
 * @action: function pointer
 * Return: 0
 */
void array_iterator(int *array, size_t size, void(*action)(int))
{
	unsigned int i = 0;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}

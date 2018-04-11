#include "search_algos.h"

/**
 * linear_search - search a value in an array of integers
 * @array: pointer to the first element of the array
 * @size: size of the array
 * @value: value to serach for
 * Return: the first index of value found, -1 if not found or fail
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			return (i);
		}
		else
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
	}
	return (-1);
}

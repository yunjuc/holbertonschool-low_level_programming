#include "sort.h"

/**
 * bubble_sort: bubble sort algorithm
 * @array: pointer to an array
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;

	if (array == NULL || size == 0)
		return;
	for (i = size - 1; i > 0; i--)
	{
		for (j = 0; j < i; j++)
		{
			if (array[j] > array[j+1])
			{
				temp = array[j+1];
				array[j+1] = array[j];
				array[j] = temp;
				print_array(array, size);
			}
		}
	}
}

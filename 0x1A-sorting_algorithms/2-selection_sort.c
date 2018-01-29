#include "sort.h"
#include <stdio.h>

/**
 * selection_sort - selection sort
 * @array: pointer to an array
 * @size: size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, n;
	int temp;

	if (array == NULL)
		return;
	n = 0;
	while (n < size)
	{
		i = n, j = n;
		while (i < size)
		{
			if (array[i] < array[j])
				j = i;
			i++;
		}
		if (n != j)
		{
			temp = array[n];
			array[n] = array[j];
			array[j] = temp;
			print_array(array, size);
		}
		n++;
	}
}

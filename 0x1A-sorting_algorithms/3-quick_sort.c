#include "sort.h"
#include <stdio.h>

/**
 * partition - separates array into segments for quicksort
 * @array: pointer to array
 * @start: lowest index of array
 * @end: end index of array
 *
 * Return: index of pivot
 */
size_t partition(int *array, size_t start, size_t end, size_t size)
{
	size_t wall, j;
	int pivot, temp;

	pivot = array[end];
	wall = start - 1;
	j = start;

	while (j < end)
	{
		if (array[j] < pivot)
		{
			wall++;
			temp = array[j];
			array[j] = array[wall];
			array[wall] = temp;
			print_array(array, size);
		}
		j++;
	}
	if (pivot < array[wall+1])
	{
		temp = array[wall+1];
		array[wall+1] = pivot;
		array[end] = temp;
		print_array(array, size);
	}
	return (wall + 1);
}

/**
 * quick_sort - implementation of quicksort with Lomuto partition scheme
 * @array: pointer to array
 * @size: size of array
 *
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	size_t i;

	if (size > 1)
	{
		i = partition(array, 0, size-1, size);
		quick_sort(array, i);
		quick_sort(array + i+1, size-i-1);
	}
}

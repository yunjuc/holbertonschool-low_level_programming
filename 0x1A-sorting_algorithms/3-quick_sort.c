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
	size_t i, j;
	int pivot, temp;

	pivot = array[end];
	i = start - 1;
	j = start;

	while (j < end)
	{
		i++;
		if (array[j] < pivot)
		{
			temp = array[j];
			array[j] = array[i];
			array[i] = temp;
			print_array(array, size);
		}
		j++;
	}
	if (array[end] < array[i + 1])
	{
		temp = array[i + 1];
		array[i + 1] = pivot;
		array[end] = temp;
		print_array(array, size);
	}
	return (i + 1);
}


/**
 * quicksort - implementation of quicksort with Lomuto partition scheme
 * @array: pointer to array
 * @start: start index of array
 * @end: end index of array
 * @size: size of array
 *
 * Return: void
 */
void quicksort(int *array, size_t start, size_t end, size_t size)
{
	size_t i;

	if (start < end)
	{
		i = partition(array, start, end, size);
		quicksort(array, start, i - 1, size);
		quicksort(array, i + 1, end, size);
	}
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
	size_t start, end;

	if (array == NULL || size < 2)
		return;

	start = 0;
	end = size - 1;
	quicksort(array, start, end, size);
}

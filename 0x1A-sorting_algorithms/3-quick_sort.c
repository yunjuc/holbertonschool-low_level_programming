#include "sort.h"

/**
 * partition - separates array into segments for quicksort
 * @array: pointer to array
 * @start: lowest index of array
 * @end: end index of array
 * @size: size of the array
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

	while (j < end - 1)
	{
		if (array[j] <= pivot)
		{
			wall++;
			if (array[j] < array[wall])
			{
				temp = array[j];
				array[j] = array[wall];
				array[wall] = temp;
				print_array(array, size);
			}
			j++;
		}
		j++;
	}
	if (pivot < array[wall + 1])
	{
		temp = pivot;
		array[end] = array[wall + 1];
		array[wall + 1] = temp;
		print_array(array, size);
	}
	return (wall + 1);
}

/**
 * sort - helper funtion to pass start and end index of the array
 * @array: pointer to array
 * @start: start index of the array
 * @end: end index of the array
 * @size: size of array
 *
 * Return: void
 */
void sort(int *array, size_t start, size_t end, size_t size)
{
	size_t i;

	if (start >= end)
		return;

	i = partition(array, start, end, size);
	if (i > start)
		sort(array, start, i, size);
	else
		sort(array, i + 1, size - 1, size);
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
	sort(array, start, end, size);
}

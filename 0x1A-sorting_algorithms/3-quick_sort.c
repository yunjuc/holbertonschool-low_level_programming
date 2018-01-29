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
/*
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
*/
	size_t i, j;
	int pivot, temp;

	pivot = array[end];
	i = start - 1;
	j = start;

	while (j < end - 1)
	{
		if (array[j] < pivot)
		{
			i++;
			temp = array[j];
			array[j] = array[i];
			array[i] = temp;
			print_array(array, size);
		}
		j++;
	}
	if (pivot < array[i + 1])
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
	if (array == NULL || size <= 0)
		return;
	else
		quicksort(array, 0, size - 1, size);
}

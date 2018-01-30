#include "sort.h"
#include <stdio.h>

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
	size_t wall = start - 1, j = start;
	int pivot = array[end], temp;

	while (j < end)
	{
		if (array[j] < pivot)
		{
			wall++;
			if (wall != j)
			{
				temp = array[wall];
				array[wall] = array[j];
				array[j] = temp;
				print_array(array, size);
			}
		}
		j++;
	}
	if (array[end] < array[wall + 1])
	{
		temp = array[end];
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
	size_t p;

	if (start >= end)
		return;
	p = partition(array, start, end, size);
	sort(array, start, p - 1, size);
	sort(array, p + 1, end, size);
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
	if (array == NULL || size < 2)
		return;

	sort(array, 0, size - 1, size);
}

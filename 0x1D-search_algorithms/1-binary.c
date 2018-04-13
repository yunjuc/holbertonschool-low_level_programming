#include "search_algos.h"

/**
 * print_array - print an array
 * @array: pointer to the first element of the array
 * @low: lowest index of the array
 * @high: highest index of the array
 * Return: none
 */
void print_array(int *array, int low, int high)
{
	int i;

	printf("Searching in array: ");
	for (i = low; i <= high; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);
}

/**
 * search - compare array with value
 * @array: pointer to the first element of the array
 * @low: smallest index in the array
 * @high: biggest index in the array
 * @value: value to serach for
 * Return: the first index of value found, -1 if not found or fail
 */
int search(int *array, int low, int high, int value)
{
	int mid;

	if (high - low >= 0)
	{
		print_array(array, low, high);
		mid = low + (high - low) / 2;
		if (array[mid] == value)
		{
			return (mid);
		}
		if (array[mid] > value)
		{
			return (search(array, low, mid - 1, value));
		}
		if (array[mid] < value)
		{
			return (search(array, mid + 1, high, value));
		}
	}
	return (-1);
}

/**
 * binary_search - search a value in an array of integers
 * @array: pointer to the first element of the array
 * @size: size of the array
 * @value: value to serach for
 * Return: the first index of value found, -1 if not found or fail
 */
int binary_search(int *array, size_t size, int value)
{
	int index;
	int low = 0, high = size - 1;

	if (array == NULL)
		return (-1);
	index = search(array, low, high, value);
	return (index);
}

#include "search_algos.h"

/**
 * print_array - print an array
 * @array: pointer to the first element of the array
 * @value: size of the array
 * Return: none
 */
void print_array(int *array, int size)
{
	int i = 0;

	printf("Searching in array: ");
	for (i = 0; i < size - 1; i++)
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

	if (high - low > 0)
	{
		mid = low + high / 2;
		if (array[mid] == value)
		{
			return (mid);
		}
		if (array[mid] > value)
		{
			print_array(&array[low], mid - low + 1);
			return (search(array, low, mid ,value));
		}
		if (array[mid] < value)
		{
			print_array(&array[mid + 1], high - mid);
			return (search(array, mid + 1, high, value));
		}
	}
	print_array(&array[low], 1);
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
	int low = 0, high = size -1;

	if (array == NULL)
		return (-1);
	print_array(array, size);
	index = search(array, low, high, value);
	return (index);
}

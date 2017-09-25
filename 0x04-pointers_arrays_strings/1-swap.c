#include "holberton.h"

/**
 * swap_int - swap value of two integers
 * @a: address of int a
 * @b: address of int b
 *
 * Description: take two ints pointer and swap the value
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}

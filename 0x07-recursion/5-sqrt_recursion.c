#include "holberton.h"

int checker(int, int);

/**
 * _sqrt_recursion - return square root of a number
 * @n: number to be chcked
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	int base = 1;

	if (n < 0)
		return (-1);
	return (checker(n, base));
}

/**
 * checker - check if there is square root
 * @n: number to be chcked
 * @base: number to compare
 * Return: square root or -1
 */
int checker(int n, int base)
{
	if (n / base == base && n % base == 0)
		return (base);
	else if  (n / base < base)
		return (-1);
	return (checker(n, base + 1));
}

#include "holberton.h"

int checker(int, int);

/**
 * is_prime_number - find if an int a prime number
 * @n: number to be checked
 * Return: 1 - is prime number
 *         0 - not prime number
 */
int is_prime_number(int n)
{
	int i = 1;

	if (n <= 1)
		return (0);
	else if (checker(n, i) == 0)
		return (0);
	return (n / checker(n, i));
}

/**
 * checker - locate prime number
 * @n: number to be checked
 * @i: potential prime factor
 * Return: 1 - is prime number
 *         0 - not prime number
 */
int checker(int n, int i)
{
	if (n == i)
		return (i);
	else if (n % i == 0)
		return (0);
	return (checker(n, i + 1));
}

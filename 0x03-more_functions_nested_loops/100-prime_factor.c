#include <stdio.h>

/**
 * main - find largest prime factor
 * Return: 0
 */
int main(void)
{
	long i, n, j;

	n = 612852475143;
	j = 0;
	for (i = 2; i <= n; i++)
	{
		if (n % i == 0)
			n = n / i;
			j = i;
	}
	printf("%ld\n", j);
	return (0);
}

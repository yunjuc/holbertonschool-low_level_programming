#include <stdio.h>

/**
 * main - find largest prime factor
 * Return: 0
 */
int main(void)
{
	int i, j;

	for (i = 1; i < 612852475143 / 2; i++)
	{
		if (612852475143 % i == 0)
			j = i;
		printf("%d\n", j);
	}
	printf("%d\n", j);
	return (0);
}

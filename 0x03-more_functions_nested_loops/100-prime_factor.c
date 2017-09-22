#include <stdio.h>

/**
 * main - find largest prime factor
 * Return: 0
 */
int main(void)
{
	int i, j;

	j = 2;
	for (i = 1; i < 612852475143 / 3; i++)
	{
		if (612852475143 % i == 0 && i > j)
			j = i;
		else
			j = j;
	}
	printf("%d\n", j);
	return (0);
}

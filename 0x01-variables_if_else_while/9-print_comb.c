#include <stdio.h>

/**
 * main - Combination
 * Description: Print number + ',' and space
 * Return: 0
 */

int main(void)
{
	int n;

	n = '0';

	do {
		putchar(n);
		if (n < '9')
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	} while (n <= '9');

	putchar('\n');
	return (0);
}

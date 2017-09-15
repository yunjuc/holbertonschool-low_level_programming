#include <stdio.h>

/**
 * main - Numberz
 * Description: Print numbers using putchar
 * Return: 0
 */

int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	putchar(n);

	putchar('\n');
	return (0);
}

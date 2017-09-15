#include <stdio.h>

/**
 * main - Hex value
 * Description: Print hex numbers with putchar
 * Return: 0
 */

int main(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	putchar(a);
	for (a = 'a'; a <= 'f'; a++)
	putchar(a);

	putchar('\n');
	return (0);
}

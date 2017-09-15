#include <stdio.h>

/**
 * main - Reverse
 * Description: Print letter in reverse order
 * Return: 0
 */

int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}

	putchar('\n');
	return (0);

}

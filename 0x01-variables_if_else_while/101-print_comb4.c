#include <stdio.h>

/**
 * main - Comb4
 * Description: Print 3 digits numbers
 * Return: 0
 */

int main(void)
{
	int i, j, t;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = i + 1; j <= '9'; j++)
		{
			for (t = i + 2; t <= '9' && (t != i) && (t != j) ; t++)
			{
				putchar(i);
				putchar(j);
				putchar(t);
				if (i == '7' && j == '8' && t == '9')
					continue;
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar ('\n');
	return (0);
}

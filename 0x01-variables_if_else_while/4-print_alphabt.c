#include <stdio.h>

/**
 * main - alphabet game
 * Description: The function prints all letters  except q and e
 * Return: 0
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'e' || ch == 'q')
		{
			ch++;
		}
		else
		{
			putchar(ch);
		}
	}

	putchar('\n');
	return (0);
}

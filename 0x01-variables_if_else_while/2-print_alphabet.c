#include <stdio.h>

/**
 * main - alphabet game
 * Description: The funcation prints a-z in lower case
 * Return: 0
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{	
		putchar(ch);
	}
        putchar('\n');
	return (0);
}

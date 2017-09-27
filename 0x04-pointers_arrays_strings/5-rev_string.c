#include "holberton.h"

/**
 * rev_string - reverse a string
 * @s: first address of string
 *
 * Description: take a string and print the string in reverse
 * Return: 0
 */
void rev_string(char *s)
{
	int l, i, j;
	char tmp;

	for (l = 0; s[l] != 0; l++)
		l = l;
	for (i = 0, j = l - 1; i <= (l - 1) / 2; i++, j--)
	{
		tmp = s[j];
		s[j] = s[i];
		s[i] = tmp;
	}
}

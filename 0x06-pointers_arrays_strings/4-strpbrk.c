#include "holberton.h"

/**
 * _strpbrk - first occurence in string from a set of char
 * @s: source string
 * @accept: char to be compared
 * Return: s - the matched bytes in the string
 *         NULL - no match found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *tmp;

	tmp = s;
	for (i = 0 ; accept[i] != '\0'; i++)
	{
		for (j = 0 ; tmp[j] != '\0' && tmp[j] != accept[i] ; j++)
		{
			if ( tmp[j] <= *s)
				*s = tmp[j];
		}
	}
	return (s);
}

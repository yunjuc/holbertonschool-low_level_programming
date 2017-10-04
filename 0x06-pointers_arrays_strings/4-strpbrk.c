#include "holberton.h"
#include <stdio.h>

/**
 * _strpbrk - first occurence in string from a set of char
 * @s: source string
 * @accept: char to be compared
 * Return: &s[i] - the matched bytes of source string
 *         NULL - no match found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0 ; s[i] != '\0'; i++)
	{
		for (j = 0 ; accept[j] != '\0' ; j++)
		{
			if (accept[j] == s[i])
				return (&s[i]);
		}
	}
	return (NULL);
}

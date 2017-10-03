#include "holberton.h"
#include <stdio.h>

/**
 * _strstr - find first occurence of string from source string
 * @haystack: source string
 * @needle: string to be searched
 * Return: s - first occurence of string
 *         NULL - no match found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; needle[i] != '\0'; i++)
	{
		for (j = 0; haystack[j] != '\0'; j++)
			if (haystack[j] == needle[i])
				return (&haystack[j]);
	}
	return ("");
}

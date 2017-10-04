#include "holberton.h"
#include <stdio.h>

/**
 * _strstr - find first occurence of string from source string
 * @haystack: source string
 * @needle: string to be searched
 * Return: haystack - first occurence in source string
 *         NULL - no match found
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	char *ptr;

	for ( ; *haystack != '\0'; haystack++)
	{
		for (i = 0; needle[i] != '\0'; )
		{
			if (needle[i] == *haystack)
			{
				ptr = haystack;
				while (needle[i] == *ptr)
				{
					if (needle[i + 1] == '\0')
						return (haystack);
					i++;
					ptr++;
				}
				break;
			}
			break;
		}
	}
	return (NULL);
}

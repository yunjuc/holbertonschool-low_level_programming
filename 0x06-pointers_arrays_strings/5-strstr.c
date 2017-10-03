#include "holberton.h"

/**
 * _strstr - find first occurence of string from source string
 * @haystack: source string
 * @needle: string to be searched
 * Return: s - first occurence of string
 *         NULL - no match found
 */
char *_strstr(char *haystack, char *needle)
{

	for ( ; *haystack != 0; haystack++)
	{
		for ( ; *needle != 0; needle++)
			if (*needle == *haystack)
				return (haystack);
	}
	return ("");
}

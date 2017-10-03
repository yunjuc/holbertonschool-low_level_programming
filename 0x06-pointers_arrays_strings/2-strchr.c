#include "holberton.h"
#include <stdio.h>

/**
 * _strchr - search char in a string
 * @s: string
 * @c: char to be searched
 * Return: char - first occurrence when char is found
 *         NULL - char is not found
 */
char *_strchr(char *s, char c)
{
	if (c == '')
		return (NULL);
	for ( ; *s != 0; s++)
	{
		if (*s == c)
			return (s);
	}
	return (NULL);
}

#include "holberton.h"
#include <stdio.h>

/**
 * _strchr - search char in a string
 * @s: string
 * @c: char to be searched
 * Return: s - first occurrence when char is found
 *         NULL - char is not found
 */
char *_strchr(char *s, char c)
{
	if (c == '\0')
		return (s);
	for ( ; *s != '\0'; s++)
	{
		if (*s == c)
			return (s);
	}
	return (NULL);
}

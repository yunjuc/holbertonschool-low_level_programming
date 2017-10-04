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
	int i;

	if (c == '\0')
		return (s);
	for (i = 0; s[i] != '\0'; )
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (NULL);
}

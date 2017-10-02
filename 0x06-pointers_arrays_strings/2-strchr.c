#include "holberton.h"

/**
 * _strchr - search char in a string
 * @s: string
 * @c: char to be searched
 * Return: char - first occurrence when char is found
 *         null - char is not found
 */
char *_strchr(char *s, char c)
{
	for ( ; *s != 0; s++)
	{
		if (*s == c)
			return (s);
	}
	return ('\0');
}

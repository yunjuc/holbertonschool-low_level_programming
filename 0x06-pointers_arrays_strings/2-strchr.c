#include "holberton.h"

/**
 * _strchr - search char in a string
 * @s: string
 * @c: char to be searched
 * Return: char - first occurrence when char is found
 *         NULL - char is not found
 */
char *_strchr(char *s, char c)
{
	char *p = 0;

	for ( ; *s != 0; s++)
	{
		if (*s == c)
			return (s);
	}
	return (p);
}

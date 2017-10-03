#include "holberton.h"

/**
 * _strspn - get lengths of prefix substring
 * @s: source string
 * @accept: substring to compare
 * Return: number ot byte found in source string
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i;

	for ( ; *s != '\0'; s++)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (accept[i] == *s)
				count++;
		}
	}
	return (count);
}

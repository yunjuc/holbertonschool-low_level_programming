#include "holberton.h"
#include <stdlib.h>

int _strlen(char *);

/**
 * argstostr - print a string from argv
 * @ac: number of arguments
 * @av: content of argument
 * Return: pointer av arguments
 *         NULL - failure
 */
char *argstostr(int ac, char **av)
{
	char **s;
	int i, j, n;

	if (ac == 0 || av == NULL)
		return (NULL);
	s = malloc(sizeof(char *) * ac + 1);
		if (s == NULL)
			return (*s);
	for (i = 0; i < ac; i++)
	{
		s[i] = malloc(sizeof(char) * _strlen(av[i]) + 1);
		if (s[i] == NULL)
			return (*s);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, n++)
			*s[n] = av[i][j];
		*s[n] = '\n';
	}
	s[n + 1] = '\0';
	return (*s);
}

/**
 * _strlen - count string length
 * @s: string to be counted
 * Return: string length
 */
int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
		len = len;
	return (len);
}

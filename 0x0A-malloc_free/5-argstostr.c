#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - print a string from argv
 * @ac: number of arguments
 * @av: content of argument
 * Return: pointer av arguments
 *         NULL - failure
 */
char *argstostr(int ac, char **av)
{
	char *s;
	int i, j, n, size;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			size++;
	}
	s = malloc(sizeof(char) * (ac + size + 1));
	if (s == NULL)
		return (s);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, n++)
			s[n] = av[i][j];
		s[n] = '\n';
		n++;
	}
	s[n] = '\0';
	return (s);
}

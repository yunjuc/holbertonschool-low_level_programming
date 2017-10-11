#include "holberton.h"
#include <stdlib.h>

int _strlen(char *);

/**
 * str_concat - concat two strings
 * @s1: 1st string
 * @s2: 2nd string
 * Return: new concated string pointer
 *         NULL - failure
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i, j;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	else if (s1 == NULL)
		s1 = "";
	else if (s2 == NULL)
		s2 = "";
	ptr = malloc((_strlen(s1) + _strlen(s2) + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0' ; i++)
		ptr[i] = s1[i];
	for (j = 0; s2[j] != '\0'; i++, j++)
		ptr[i] = s2[j];
	ptr[i] = '\0';
	return (ptr);
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

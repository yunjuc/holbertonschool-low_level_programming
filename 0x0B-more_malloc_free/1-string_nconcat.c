#include "holberton.h"
#include <stdlib.h>

int _strlen(char *);

/**
 * string_nconcat - concat two string
 * @s1: string 1
 * @s2: string 2
 * @n: copy n bytes from string s2
 * Return: pointer to new memory location
 *         NULL - failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	ptr = malloc((_strlen(s1) + _strlen(s2) + 1) * sizeof(n));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	for (j = 0; j < n && s2[j] != '\0'; j++, i++)
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

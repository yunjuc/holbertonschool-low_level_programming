#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - copy a string
 * @str: string to be copied
 * Description: copy a string from memeory and return a pointer point to it
 * Return: pointer to copied string
 *         NULL - string is NULL
 */
char *_strdup(char *str)
{
	char *ptr;
	int i, len = 0;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		len++;
	ptr = malloc((len + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0 ; i < len ; i++)
		ptr[i] = str[i];
	ptr[i] = '\0';
	return (ptr);
}

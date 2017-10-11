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
	int i, length;

	if (str == NULL)
		return (NULL);
	for (length = 0; str[length] != '\0'; length++)
		length = length;
	ptr = malloc((length + 1) * sizeof(str));
	if (ptr == NULL)
		return (NULL);
	for (i = 0 ; str[i] != '\0' ; i++)
		ptr[i] = str[i];
	ptr[i] = '\0';
	return (ptr);
}

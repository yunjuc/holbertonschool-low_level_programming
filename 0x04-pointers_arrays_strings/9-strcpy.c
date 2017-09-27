#include "holberton.h"

/**
 * _strcpy - copy string
 * @dest: string name
 * @src: string to be copied
 *
 * Description: copya string and point it to a pointer
 * R:eturn: destination pointer
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != 0; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

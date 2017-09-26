#include "holberton.h"

/**
 * _strlen - count string length
 * @s: first address of strsng array
 *
 * Description: take a string array address and return the length
 * Return: lenghth of string
 */
int _strlen(char *s)
{
	int i;

	while (s[i] != 0)
		i++;
	return (i);
}

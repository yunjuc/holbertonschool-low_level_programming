#include "holberton.h"

/**
 * _islower - check lower case letter
 * @c: char to be checked
 *
 * Description: check if the parameter is lower or not
 * Return: 1 - is lower case
 *         0 - not lower case
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

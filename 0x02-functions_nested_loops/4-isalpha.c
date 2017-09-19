#include "holberton.h"

/**
 * _isalpha - check alphabetic letter
 * @c: char to be checked
 *
 * Description: check if the parameter is an alphabetic letter
 * Return: 1 - is lower case
 *         0 - not lower case
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}

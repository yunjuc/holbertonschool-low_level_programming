#include "holberton.h"

/**
 * _isupper - check letter case
 * @c: letter to be checked
 *
 * Description: check a letter case and return 1 or 0
 * Return: 1 - is upper case
 *         0 - is not upper case
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else if (c >= 'a' && c <= 'z')
		return (0);
	else
		return (0);
}

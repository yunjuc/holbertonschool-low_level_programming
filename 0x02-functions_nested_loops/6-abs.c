#include "holberton.h"

/**
 * _abs - print absolute value
 * @c: integer to be checked
 *
 * Description: check the absolute value of an integer
 * Return: c - if c is greater than 0
 *         0 - if c is 0
 *         0-c - if c is smaller than 0
 */
int _abs(int c)
{
	if (c > 0)
		return (c);
	else if (c == 0)
		return (0);
	else
		return (0 - c);
}

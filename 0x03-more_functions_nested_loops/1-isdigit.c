#include "holberton.h"

/**
 * _isdigit - check if an int a digit
 * @c: int to be checked
 *
 * Description: check an intand return 1 or 0
 * Return: 1 - is digit
 *         0 - is not digit
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

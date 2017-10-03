#include "holberton.h"

/**
 * set_string - set the value of a pointer
 * @s: dest pointer
 * @to: value to be pointed
 * Return: 0
 */
void set_string(char **s, char *to)
{
	*s = to;
}

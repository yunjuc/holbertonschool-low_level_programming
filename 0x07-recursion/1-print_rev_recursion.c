#include "holberton.h"

/**
 * _puts_rev_recursion - print a string in reverse
 * @s: pointer to source string
 */
void _puts_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	while (*s != '\0')
	{
		_puts_rev_recursion(s + 1);
		_putchar(*s);
	}
}

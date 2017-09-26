#include "holberton.h"

/**
 * _puts - print a string
 * @str: first address of string array
 *
 * Description: take first address of the array and print the string
 * Return: 0
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		_putchar(str[i]);
	_putchar('\n');
}

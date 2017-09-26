#include "holberton.h"

/**
 * print_rev - print reverse string
 * @s: first address of string array
 *
 * Description: take address of a array and print the string in reverse
 * Return: 0
 */
void print_rev(char *s)
{
	int i, j;

	i = 0;
	while (s[i] != 0)
		i++;
	for (j = i - 1; j >= 0 ; j--)
		_putchar(s[j]);
	_putchar('\n');
}

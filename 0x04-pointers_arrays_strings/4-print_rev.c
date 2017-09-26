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
	int i;

	while (s[i] != 0)
		i++;
	while (s[i] >= s[0])
	{	_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}

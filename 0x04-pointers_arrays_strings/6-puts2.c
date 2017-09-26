#include "holberton.h"

/**
 * puts2 - print half of a string
 * @str: first address of string
 *
 * Description: take a string and print only the odd position
 * Return: 0
 */
void puts2(char *str)
{
	int i;

	for (i = 0; i <= 10; i++)
		if (i % 2 == 0)
			_putchar(str[i]);
	_putchar('\n');
}

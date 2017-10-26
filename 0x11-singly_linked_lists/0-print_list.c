#include "lists.h"
#include <unistd.h>

int _putchar(char c);
void _puts(char *str);

/**
 * print_list - print elements in a list
 * @h: pointer to list head
 * Return: number of elements
 */
size_t print_list(const list_t *h)
{
	unsigned int size;

	while (h != NULL)
	{
		_puts(h->str);
		h = h->next;
		size++;
	}
	return (size);
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _puts - print a string
 * @str: pointer to string
 * Return: 0
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		_putchar(str[i]);
	_putchar('\n');
}

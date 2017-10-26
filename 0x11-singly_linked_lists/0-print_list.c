#include "lists.h"
#include <unistd.h>

int _putchar(char c);
void str_print(char *str);

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
		str_print(h->str);
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
 * str_print - print a string
 * @str: pointer to string
 * Return: 0
 */
void str_print(char *str)
{
	int i;
	char *s = str;

	if (s == NULL)
		s = "(nil)";
	for (i = 0; s[i] != 0; i++)
		_putchar(s[i]);
	_putchar('\n');
}

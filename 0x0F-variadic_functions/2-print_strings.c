#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_strings - print strings
 * @separator: separator between string
 * @n: string to be printed
 * Return: 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *s;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(ap, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (separator != NULL && i + 1 != n)
		printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}

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

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
/*		if (va_arg(ap, char*) == NULL)
			printf("(nil)");
*/
		printf("%s", va_arg(ap, char*));
		if (i + 1 != n && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}

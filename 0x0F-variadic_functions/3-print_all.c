#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_all - print all arguments
 * @format: argument to be printed
 * Return: 0
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0;

	va_start(ap, format);

	while (format[i] != '\0' && i < 9)
	{
		if (format[i] == 'i' || format[i] == 'c' || format[i] == 's'
			|| format[i] == 'f')
		{
			switch (format[i])
			{
				case 'i':
					printf("%d", va_arg(ap, int));
					break;
				case 'f':
					printf("%f", va_arg(ap, double));
					break;
				case 'c':
					printf("%c", va_arg(ap, int));
					break;
				case 's':
					printf("%s", va_arg(ap, char *));
					break;
			}
		}
		printf(", ");
		i++;
	}
	printf("\n");

	va_end(ap);
}

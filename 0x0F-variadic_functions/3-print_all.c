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

	if (format == NULL)
		return;

	while (format[i] != '\0' && i < 9)
	{
		switch (format[i])
		{
			case 'i':
				printf("%d, ", va_arg(ap, int));
				break;
			case 'f':
				printf("%f, ", va_arg(ap, double));
				break;
			case 'c':
				printf("%c, ", va_arg(ap, int));
				break;
			case 's':
/*
*				if (va_arg(ap, char *) == NULL)
*				{
*
*					printf("(nil)");
*					break;
*				}
*/
				printf("%s, ", va_arg(ap, char *));
				break;
			default:
				break;
		}
		i++;
	}
	printf("\n");

	va_end(ap);
}

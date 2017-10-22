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
	char *s;

	va_start(ap, format);

	while (format != NULL && format[i] != '\0' && i < 9)
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
				s = va_arg(ap, char *);
				if (s == NULL)
					printf("(nil)");
				else
					printf("%s", s);
				break;
			default:
				break;
		}
		if ((format[i] == 'i' || format[i] == 'f' || format[i] == 'c'
		|| format[i] == 's') && format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");

	va_end(ap);
}

#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * sum_them_all - return sum of all arguments
 * @n: numbers to be summed
 * Return: sum of numbers. 0 if no number is received.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, const unsigned int);

	va_end(ap);
	return (sum);
}

#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - print a name
 * @name: name to be print
 * @f: function pointer
 * Return: 0
 */
void print_name(char *name, void(*f)(char *))
{
	f(name);
}

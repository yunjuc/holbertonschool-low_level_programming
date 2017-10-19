#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_op_func - function pointer
 * @s: operator
 * Return: result of operation
 */
int (*get_op_func(char *s))(int, int)
{
	int i;
	int (*op)(int, int);

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	for (i = 0; s != ops[0] ; i++)
	{
		if (s == ops[0])
		{
			return (ops[1]`);
			break;
		}
	}
}

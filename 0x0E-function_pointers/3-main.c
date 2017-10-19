#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - a program to do simple operations
 * @argc: argument count
 * @argv: argumnets
 * Return: 0
 */
int main(int argc, char **argv)
{
	if (argc == 1 || argc > 4)
	{
		printf("Error\n");
		return (98);
	}
	if (argv[2] != '+' || argv[2] != '-' || argv[2] != '*' ||
		argv[2] != '/' || argv[2] != '%')
	{
		printf("Error\n");
		exit(99);
	}
	if (argv[2] == '/' || argv[2] == '%' && argv[3] == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), aoti(argv[3]));
	return (0);
}

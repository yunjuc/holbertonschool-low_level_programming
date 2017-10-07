#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiple numbers
 * Description: a program to numtiple numbers
 * @argc: number count of argument
 * @argv: argument
 * Return: 0
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
	}
	else
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}

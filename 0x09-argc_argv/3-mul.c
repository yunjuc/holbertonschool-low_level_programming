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
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);

	if (argc != 3)
	{
		printf("Error\n");
	}
	else
		printf("%d\n", a * b);
	return (0);
}

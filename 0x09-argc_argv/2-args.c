#include <stdio.h>

/**
 * main - print the argument
 * Description: print the contents of arguments passed to main
 * @argc: number count of argument
 * @argv: arguments in string
 * Return: 0
 */
int main(int argc, char *argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}

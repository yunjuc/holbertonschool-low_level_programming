#include <stdio.h>

/**
 * main - print the program name
 * @argc: number count of argument
 * @argv: argument
 * Description: print name of current program
 * Return: 0
 */
int main(int argc __attribute__ ((unused)), char **argv)
{
	printf("%s\n", argv[0]);
	return (0);
}

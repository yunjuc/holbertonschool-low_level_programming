#include <stdio.h>

/**
 * main - print the program name
 * Description: print name of current program
 * Return: 0
 */
int main(int argc __attribute__ ((unused)), char **argv)
{
	printf("%s\n", argv[0]);
	return (0);
}

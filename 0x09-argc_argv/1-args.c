#include <stdio.h>

/**
 * main - print the number of arguments
 * Description: print number of arguments passed to main
 * Return: 0
 */
int main(int argc, char *argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

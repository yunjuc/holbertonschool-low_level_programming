/**
 * main - Print size of variables
 * Description: This function prints size of variables
 * Return: 0
 */

#include <stdio.h>

int main(void)
{
	char c;
	int i;
	long int lg_i;
	long long int lg2_i;
	float f;

	printf("Size of a char: %lu byte(s)\n", sizeof(c));
	printf("Size of an int: %lu byte(s)\n", sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", sizeof(lg_i));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(lg2_i));
	printf("Size of a float: %lu byte(s)\n", sizeof(f));
	return (0);
}

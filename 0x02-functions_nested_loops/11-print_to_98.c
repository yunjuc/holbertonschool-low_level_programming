#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - print numbers until 98
 * @c: starting number
 */
void print_to_98(int c)
{
	if (c > 98)
	{
		while (c > 98)
		{
			printf("%d, ", c);
			c--;
		}
		printf("98\n");
	}
	else if (c < 98)
	{
		while (c < 98)
		{
			printf("%d, ", c);
			c++;
		}
		printf("98\n");
	}
	else
	{
		printf("98\n");
	}

}

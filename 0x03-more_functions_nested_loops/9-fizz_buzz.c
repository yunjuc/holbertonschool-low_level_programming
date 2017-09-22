#include <stdio.h>

/**
 * main - Fizz-Buzz
 * Description: Print number 1-100, and replace multiples of 3, 5, 15 with
 *              Fizz, Buzz, and Fizz-Buzz
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 15 == 0)
			printf("Fizz Buzz ");
		else if (a % 5 == 0)
			printf("Buzz ");
		else if (a % 3 == 0)
			printf("Fizz ");
		else
			printf("%d ", a);
	}
	putchar('\n');
	return (0);
}

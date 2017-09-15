#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Positive or negative
 * Description: The funcation will check positive/nagative value of a number
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	printf("%d is positive\n", n);
	else if (n < 0)
	printf("%d is negative\n", n);
	else
	printf("%d is 0\n", n);
	return (0);
}

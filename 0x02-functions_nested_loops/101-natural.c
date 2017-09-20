#include <stdio.h>

/**
 * main - sum of nature numbers
 *
 * Description: compute the sum of multiples of 3 and 5 below 1024
 * Return: 0
 */
int main(void)
{
	int i, num, sum;

	sum = 0;
	num = 0;
	for (i = 1; i < 1024 / 3; i++)
	{
		num = num + 3;
		if (num < 1024)
			sum = sum + num;
	}
	num = 0;
	for (i = 1; i < 1024 / 5; i++)
	{
		num = num + 5;
		if (num < 1024)
			sum = sum + num;
	}
	num = 0;
	for (i = 1; i < 1024 / 15; i++)
		num = num + 15;
		if (num < 1024)
			sum = sum - num;
	printf("%d\n", sum);
	return (0);
}

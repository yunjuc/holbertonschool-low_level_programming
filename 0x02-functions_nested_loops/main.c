#include <stdio.h>
#include "holberton.h"

/**
 * main - print alphabet letters
 * Description: Print alphabet letters
 * Return: 0
 */

int main(void)
{

	int r;

    r = _abs(-1);
    printf("%d\n", r);
    r = _abs(0);
    printf("%d\n", r);
    r = _abs(1);
    printf("%d\n", r);
    r = _abs(-98);
    printf("%d\n", r);
    return (0);
}

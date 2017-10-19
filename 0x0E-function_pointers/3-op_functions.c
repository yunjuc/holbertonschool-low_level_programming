#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - add operation
 * @a: 1st integer
 * @b: 2nd integer
 * Return: result of add operation
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract operation
 * @a: 1st integer
 * @b: 2nd integer
 * Return: result of substract operation
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiple operation
 * @a: 1st integer
 * @b: 2nd integer
 * Return: result of multiple operation
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide operation
 * @a: 1st integer
 * @b: 2nd integer
 * Return: result of divide operation
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - module operation
 * @a: 1st integer
 * @b: 2nd integer
 * Return: result of module operation
 */
int op_mod(int a, int b)
{
	return (a % b);
}

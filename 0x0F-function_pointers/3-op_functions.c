
#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - Function computes sum of two integers
 * @a: first integer
 * @b: second integer
 * Return: sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Function computes difference between two integers
 * @a: first integer
 * @b: second integer
 * Return: difference
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Function computes product of two integers
 * @a: first integer
 * @b: second integer
 * Return: product
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Function computes division of two integers
 * @a: first integer
 * @b: second integer
 * Return:  divide result
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Function computes the modulo of two integers
 * @a: first integer
 * @b: second integer
 * Return: modulo value
 */

int op_mod(int a, int b)
{
	return (a % b);
}

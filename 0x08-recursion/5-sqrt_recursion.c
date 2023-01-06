#include "main.h"
int helper_function(int c, int i);

/**
 * _sqrt_recursion - function returns natural square root of number
 * @n: integer number
 * Return: -1 or  natural root
 */
int _sqrt_recursion(int n)
{
	return (helper_function(n, 1));
}

/**
 * helper_function - assist in solving  _sqrt_recursion
 * @c: sqrt number being  determined
 * @i: count
 * Return: sqrt if natural root, or -1 if none
 */
int helper_function(int c, int i)
{
	int sq;

	sq = i * i;
	if (sq == c)
		return (i);
	else if (sq < c)
		return (helper_function(c, i + 1));
	else
		return (-1);
}

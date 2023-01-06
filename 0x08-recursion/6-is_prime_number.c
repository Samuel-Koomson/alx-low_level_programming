#include "main.h"
int helper_function(int x, int y);

/**
 * is_prime_number - function that checks for prime numbers
 * @n: prime number to be checked
 * Return: 1 for prime number else return 0
 */

int is_prime_number(int n)
{
return (helper_function(n, 2));
}

/**
 * helper_function - function that assist in solving the code
 * @x: number
 * @y: number of power
 * Return: 0
 */
int helper_function(int x, int y)
{
if (x <= 1 || (x != y && x % y == 0))
{
return (0);
}
else if (x == y)
{
return (1);
}
return (helper_function(x, y + 1));
}

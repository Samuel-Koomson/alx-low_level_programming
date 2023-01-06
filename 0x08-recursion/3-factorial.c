#include "main.h"

/**
* factorial - function that prints factorial of a given number recursively
* @n: integer
* Return: integer
*/

int factorial(int n)
{
if (n < 0)
return (-1);
else if (n < 2)
return (n);
else
return (n * factorial(n - 1));
}


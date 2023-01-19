#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Variadic function that computes sum of all its parameters
 * @n: number of parameter being passed to the function
 * Return: the resulting sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int x;
	int add = 0;
	va_list var;

	va_start(var, n);

	for (x = 0; x < n; x++)
		add += va_arg(var, int);

	va_end(var);

	return (add);
}

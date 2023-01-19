#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Function that prints parameters numbers
 * @separator: string being  printed between numbers
 * @n: number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	va_list var;

	va_start(var, n);

	for (x = 0; x < n; x++)
	{
		if (!separator)
			printf("%d", va_arg(var, int));
		else if (separator && x == 0)
			printf("%d", va_arg(var, int));
		else
			printf("%s%d", separator, va_arg(var, int));
	}

	va_end(var);

	printf("\n");
}

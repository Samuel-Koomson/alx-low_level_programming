#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Variadic function that prints strings
 * @separator: string to be printed between the strings
 * @n: number of parameter arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	char *str;

	va_list var;

	va_start(var, n);

	for (x = 0; x < n; x++)
	{
		str = va_arg(var, char *);
		if (!str)
			str = "(nil)";
		if (!separator)
			printf("%s", str);
		else if (separator && x == 0)
			printf("%s", str);
		else
			printf("%s%s", separator, str);
	}

	printf("\n");

	va_end(var);
}

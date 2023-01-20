#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Variadic function that prints anything
 * @format: List of types of parameters passed to the function
 */

void print_all(const char * const format, ...)
{
	int x = 0;
	char *str, *sam = "";

	va_list var;

	va_start(var, format);

	if (format)
	{
	while (format[x])
	{
	switch (format[x])
	{
	case 'c':
	printf("%s%c", sam, va_arg(var, int));
	break;
	case 'i':
	printf("%s%d", sam, va_arg(var, int));
	break;
	case 'f':
	printf("%s%f", sam, va_arg(var, double));
	break;
	case 's':
	str = va_arg(var, char *);
	if (!str)
	str = "(nil)";
	printf("%s%s", sam, str);
	break;
	default:
	i++;
	continue;
	}
	sam = ", ";
	i++;
	}
	}

	printf("\n");
	va_end(var);
}

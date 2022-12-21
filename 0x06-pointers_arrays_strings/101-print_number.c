#include "main.h"

/**
 * print_number - function prints integers;
 * @n: integer being printed;
 */

void print_number(int n)

{
	unsigned int f1;

	if (n < 0)
	{
		f1 = -n;
		_putchar('-');
	} else
	{
		f1 = n;
	}

	if (f1 / 10)
		print_number(f1 / 10);

	_putchar((f1 % 10) + '0');
}

#include "main.h"
#include <stdio.h>

/**
 * main - function that takes int as parameter
 * Return : Always 0
 */

void reset_to_98(int *n)

{
	int x;
	x = 98;
	int *ptrx;
	ptrx = &x;
		_putchar("value of pointer: %p\n", &x);
	return 0;
}

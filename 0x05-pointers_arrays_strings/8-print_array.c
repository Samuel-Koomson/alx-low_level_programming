#include "main.h"
/**
 * print_array - prints elements of an array
 * @a: name of the array
 * @n: number of arrays being printed
 * Return: 0
 */


void print_array(int *a, int n)
{
	int kp;

	for (kp = 0; kp < (n - 1); kp++)
	{
		_putchar("%d, ", a[kp]);
	}
	if (kp == (n - 1))
	{
		_putchar("%d", a[n - 1]);
	}
	_putchar("\n");
}

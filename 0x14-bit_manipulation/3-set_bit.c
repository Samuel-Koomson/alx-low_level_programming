#include "main.h"

/**
 * set_bit - Function that sets value of a bit to 1 at a given index
 * @n: decimal pointer number
 * @index: index being set, starting from 0
 * Return: 1 if success, or -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int y;

	if (index > 64)
		return (-1);

	for (y = 1; index > 0; index--, y *= 2)
		;
	*n += y;

	return (1);
}

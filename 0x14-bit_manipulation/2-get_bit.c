#include "main.h"
/**
 * get_bit - Function that gets the value of a bit at given index
 * @n: bit of interest
 * @index: index of value
 * Return: value of bit at index or -1 when fail
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}

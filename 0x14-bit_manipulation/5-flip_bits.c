#include "main.h"
/**
 * flip_bits - Function that returns number of bits to be flipped
 * to get from one number to another
 * @n: (unsigned long int) number
 * @m: (unsigned long int ) number to flip to
 * Return: number of bits being  flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;
	unsigned long int y = 0;

	while (x > 0)
	{
		y += (x & 1);
		x >>= 1;
	}
	return (y);
}

#include "main.h"
/**
 * binary_to_uint - Function that convert binary to unsigned int.
 * @b: character pointer
 * Return: converted number or 0 
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int y;

	if (b == NULL)
		return (0);
	for (y = 0; *b; b++)
	{
		if (*b != '1' && *b != '0')
		{
			return (0);
		}
		if (*b == '1')
			y = (y << 1) | 1;
		else
			if (*b == '0')
				y <<= 1;
			else
			{
				y += 0;
				break;
			}
	}
	return (y);
}

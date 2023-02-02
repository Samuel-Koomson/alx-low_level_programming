#include "main.h"
/**
 * binary_to_uint - Function that convert binary to unsigned int.
 * @b: character pointer
 * Return: converted number or 0
 */
 unsigned int binary_to_uint(const char *b)
{
	unsigned int mark, tally;
	int lenght;

	if (b == NULL)
		return (0);

	for (lenght = 0; b[lenght]; lenght++)
	{
		if (b[lenght] != '0' && b[lenght] != '1')
			return (0);
	}

	for (tally = 1, mark = 0, lenght--; lenght >= 0; lenght--, tally *= 2)
	{
		if (b[lenght] == '1')
			mark += tally;
	}

	return (mark);
}

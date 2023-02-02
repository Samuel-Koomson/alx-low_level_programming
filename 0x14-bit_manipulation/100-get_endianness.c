#include "main.h"
/**
 * get_endianness - Function that checks the  endianness
 * Return: 1 if little endian, 0 if big endian
 */
int get_endianness(void)
{
	int x = 1;
	char *ptr = (char *)&x;

	if (ptr[0] == 1)
		return (1);
	else
		return (0);
}

#include "main.h"
#include <ctype.h>

/**
 * _isalpha - checks if data is alphabetic or not
 * @c: takes character for analysis
 * Return: returns value
 */

int _isalpha(int c)
{
	int value;

	if (isalpha(c))
	{
		value = 1;
	}
	else
	{
		value = 0;
	}
	return (value);
}

#include "main.h"

/**
 * _atoi - function that converts strings to integers.
 * @s: string being converted.
 * Return: int value of converted string.
 */

int _atoi(char *s)

{
	int val = 1;
	unsigned int man = 0;

	do {
		if (*s == '-')
			val *= -1;

		else if (*s >= '0' && *s <= '9')
			man = (man * 10) + (*s - '0');

		else if (man > 0)
			break;

	} while (*s++);

	return (man * val);
}

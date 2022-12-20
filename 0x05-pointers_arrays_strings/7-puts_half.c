#include "main.h"

/**
 * puts_half - Used for printing half of a string.
 * @str: string being printed.
 * Return: half of string
 */
void puts_half(char *str)
{
	int alpha = 0, beta = 0, n;

	while (str[alpha++])
		beta++;

	if ((beta % 2) == 0)
		n = beta / 2;

	else
		n = (beta + 1) / 2;

	for (alpha = n; alpha < beta; alpha++)
		_putchar(str[alpha]);

	_putchar('\n');
}

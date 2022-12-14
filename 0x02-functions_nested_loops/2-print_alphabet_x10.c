#include "main.h"
/**
 *print_alphabet_x10 - printing alphabet x10
 *
 * Return: nothing
 */

void print_alphabet_x10(void)

{
	char alpha_x10;

	int numbering;

	for (numbering = 1; numbering <= 10; numbering++)
	{
	for (alpha_x10 = 'a'; alpha_x10 <= 'z'; alpha_x10++)

		_putchar(alpha_x10);

	_putchar('\n');
}
}

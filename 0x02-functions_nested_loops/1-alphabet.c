#include "main.h"

/**
 * print_alphabet - printing alphabets a to z
 *
 * Return: nothing
 */

void print_alphabet(void)

{
char alpha;
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
_putchar(alpha);
}
_putchar('\n');
}

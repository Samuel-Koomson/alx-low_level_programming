#include "main.h"

/**
 * print_rev - prints strings in reverse
 * @s: string to be printed
 * Return: 0
 */

void print_rev(char *s)

{
char *m, *n;
m = s;
while (*s != '\0')
{
s++;
}
n = s;
while (n >= m)
{
if (*n != '\0')
{
_putchar(*n);
}
n--;
}
_putchar('\n');
}

#include "main.h"

/**
*_print_rev_recursion - function for printing strings in reverse
*@s: string
*Return: void
*/
void _print_rev_recursion(char *s)

{
if (*s == '\0')
return;
_print_rev_recursion(s + 1);
_putchar(*s);
}

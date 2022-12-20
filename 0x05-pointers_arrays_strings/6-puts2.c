#include "main.h"


/**
 *puts2 - function prints every other character of a string
 *@str: the string being printed
 */

void puts2(char *str)

{
int ben, a;
ben = 0;
a = 0;
while (str[ben] != '\0')
ben++;

while (a < ben)
{
_putchar(str[a]);
a += 2;
}
_putchar('\n');
}

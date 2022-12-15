#include "main.h"

/**
* more_numbers - Printing numbers from 0 - 14 times 10
*/

void more_numbers(void)
{
int num, c;

for (c = 1; c <= 10; c++)
{
for (num = 0; num <= 14; num++)
{
if (num > 9)
_putchar((num / 10) + '0');
_putchar((num % 10) + '0');
}
_putchar('\n');
}
}

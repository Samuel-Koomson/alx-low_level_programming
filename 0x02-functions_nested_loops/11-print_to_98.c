#include <stdio.h>

/**
 * print_to_98 - Printing natural numbers to 98
 * @num: starting point number
 */

void print_to_98(int num)

{
if (num <= 98)
{
while (num < 98)
printf("%d, ", num++);
printf("%d\n", num);
}
else
{
while (num > 98)
printf("%d, ", num--);
printf("%d\n", num);
}
}

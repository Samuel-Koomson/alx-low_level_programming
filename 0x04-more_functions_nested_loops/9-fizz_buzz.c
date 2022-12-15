#include <stdio.h>

/**
 * main - Prints numbers from 1-100, in multiples of three,
 *        print fizz in place of number, in multiples of five,
 *        Fizzbuzz both three and five.
 * Return: void
 */
int main(void)
{
int num;

for (num = 1; num <= 100; num++)
{
if ((num % 3) == 0 && (num % 5) == 0)
printf("FizzBuzz");

else if ((num % 3) == 0)
printf("Fizz");

else if ((num % 5) == 0)
printf("Buzz");

else
printf("%d", num);

if (num == 100)
continue;
printf(" ");
}

printf("\n");

return (0);
}

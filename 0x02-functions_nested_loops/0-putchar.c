#include "main.h"

/**
 * main - main entry
 * Description: prints putchar message
 * Return: 0 success
 */

int main(void)
{
	char str[] = "_putchar\n";
	int i = 0;

	while (i <= 8)
	{
		_putchar(str[i]);
		i++;
	}
	return (0);
}


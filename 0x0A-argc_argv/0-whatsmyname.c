#include <stdio.h>

/**
 * main - function that determines number of arguments
 * @argc: parameter to store number of arguments
 * @argv: ref parameter to store a string of arguments
 * Return: void
 */

int main(int argc, char *argv[])
{
	int i = 0;
	(void)argc;

	while (argv[0][i] != '\0')
	{
		putchar(argv[0][i]);
		i++;
	}
	putchar('\n');
	return (0);
}

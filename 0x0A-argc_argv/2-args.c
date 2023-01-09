#include <stdio.h>

/**
 * main - function that determine number of arguments
 * @argc: parameter to store number of arguments
 * @argv: ref parameter to store a string of arguments
 * Return: integer
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}

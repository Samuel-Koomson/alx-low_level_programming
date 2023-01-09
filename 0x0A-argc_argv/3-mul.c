#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that calculates product of two numbers
 * @argc: number of parameters or arguments
 * @argv: array of arguments
 * Return: 1 or 0.
 */

int main(int argc, char **argv)
{
	int a = 0, b = 0;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

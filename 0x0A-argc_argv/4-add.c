#include <stdio.h>
#include <stdlib.h>

/**
 * main - add integer numbers
 * @argc: number of arguments
 * @argv: array of string arguments
 * Return: 0 or 1
 */

int main(int argc, char **argv)
{
	int x, y, sum = 0;

	if (argc < 1)
		printf("0\n");
	else
	{
		for (x = 1; x < argc; x++)
		{
			for (y = 0; argv[x][y] != '\0'; y++)
			{
				if (argv[x][y] < 48 || argv[x][y] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			if (atoi(argv[x]) > 0)
				sum += atoi(argv[x]);
		}
		printf("%i\n", sum);
	}
	return (0);
}

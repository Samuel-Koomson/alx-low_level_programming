#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that determines change 
 * @argc: number of arguments to be passed
 * @argv: an array of arguments
 * Return: 0 or 1
 */

int main(int argc, char **argv)
{
	int amount, change;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}

	change = atoi(argv[1]);

	for (amount = 0; change > 0; amount++)
	{
		if (change - 25 >= 0)
			change = change - 25;
		else if (change - 10 >= 0)
			change = change - 10;
		else if (change - 5 >= 0)
			change = change - 5;
		else if (change - 2 >= 0)
			change = change - 2;
		else if (change - 1 >= 0)
			change = change - 1;
	}
	printf("%d\n", amount);
	return (0);
}

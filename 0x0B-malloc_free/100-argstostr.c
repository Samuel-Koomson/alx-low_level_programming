#include "main.h"
#include <stdlib.h>

/**
 * argstostr - function concatenates all arguments of a program
 * @ac: counts argument
 * @av: double pointer to array
 * Return: Null or return pointer
 */

char *argstostr(int ac, char **av)
{
	char *new, *rep;
	int x, y, sum;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (x = 0, sum = 0; x < ac; x++)
	{
		for (y = 0; *(*(av + x) + y) != '\0'; y++, sum++)
			;
		sum++;
	}
	sum++;

	new = malloc(total * sizeof(char));
	if (new == NULL)
		return (NULL);

	rep = new;
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
		{
			*new = av[x][y];
			new++;
		}
		*new = '\n';
		new++;
	}

	return (rep);
}

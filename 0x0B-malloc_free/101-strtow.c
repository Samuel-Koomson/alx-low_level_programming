#include "main.h"
#include <stdlib.h>

/**
 * ch_free_grid - function that free a 2D array.
 * @grid: 2D array of char.
 * @height: height of the array.
 * Return: no return
 */
void ch_free_grid(char **grid, unsigned int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(grid[height]);
		free(grid[height]);
		free(grid);
	}
}

/**
 * strtow - function that split a string into words.
 * @str: string.
 * Return: pointer array of integers
 */
char **strtow(char *str)
{
	char **home;
	unsigned int a, b, x, y, ac;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (a = b = 0; str[a] != '\0'; a++)
		if (str[a] != ' ' && (str[a + 1] == ' ' || str[a + 1] == '\0'))
			b++;
	home = malloc((b + 1) * sizeof(char *));
	if (home == NULL || b == 0)
	{
		free(home);
		return (NULL);
	}
	for (x = ac = 0; x < b; x++)
	{
		for (a = ac; str[a] != '\0'; a++)
		{
			if (str[a] == ' ')
				ac++;
			if (str[a] != ' ' && (str[a + 1] == ' ' || str[a + 1] == '\0'))
			{
				home[x] = malloc((a - ac + 2) * sizeof(char));
				if (home[x] == NULL)
				{
					ch_free_grid(home, x);
					return (NULL);
				}
				break;
			}
		}
		for (y = 0; ac <= a; ac++, y++)
			home[x][y] = str[ac];
		home[x][y] = '\0';
	}
	home[x] = NULL;
	return (home);
}

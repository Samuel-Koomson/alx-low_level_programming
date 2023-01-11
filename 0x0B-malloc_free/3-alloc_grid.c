#include "main.h"
#include <stdlib.h>

/**
* **alloc_grid- function that returns pointers to 2D arrays
* @width: int variable width 
* @height: int variable height
* Return: 0, NULL or negative
*/

int **alloc_grid(int width, int height)
{
	int **alloc;
	int x, y;

	if (width + height < 2 || width < 1 || height < 1)
		return (NULL);

	alloc = malloc(height * sizeof(*alloc));
	if (alloc == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		alloc[x] = malloc(width * sizeof(**alloc));
		if (alloc[x] == NULL)
		{
			for (x--; x >= 0; x--)
				free(alloc[x]);
			free(alloc);
			return (NULL);
		}
		for (y = 0; y < width; y++)
			alloc[x][y] = 0;
	}

	return (alloc);
}

#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees the memory allocated to a  grid created usingi
 * the  alloc_grid() function in previous task
 * @grid: grid being freed
 * @height: height of the grid being freed
 */
void free_grid(int **grid, int height)
{
	int x;

	if (grid == NULL || height == 0)
		return;

	for (x = 0; x < height; x++)
		free(grid[x]);

	free(grid);
}

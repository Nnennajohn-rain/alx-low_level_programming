#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * free_grid - frees the memory previously allocated for the grid
 * the alloc_grid()
 * @grid: grid to freed
 * @height: height of the grid
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}

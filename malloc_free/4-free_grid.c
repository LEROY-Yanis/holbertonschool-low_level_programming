#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* free_grid - Frees a 2D Grid
* @grid: The grid
* @height: Height of the grid
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
		free(grid);
}

#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Function that frees a 2d
 * integer grid previously created by alloc_grid
 * @grid: the adress of the 2d grid
 * @height: height of the grid
 * Return: nothin
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}

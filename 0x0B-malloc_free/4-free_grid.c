#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free the grid previously created
 * @grid: the grid
 * @height: its height
 *
 * Return: always 0
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

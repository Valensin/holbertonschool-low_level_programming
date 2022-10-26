/*
 * Author: Onil
 * File: 4_free_grid.c
 */

#include "main.h"
#include <stdlib.h>

/**
 * free_grid - it frees a 2D grid, that was created
 * by the alloc_grid function
 *
 * @grid: the grid to free
 * @height: the height of grid
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int var1;

	for (var1 = 0; var1 < height; var1++)
	{
		free(grid[var1]);
	}

	free(grid);
}

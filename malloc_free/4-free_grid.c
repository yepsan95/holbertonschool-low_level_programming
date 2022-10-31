#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional array created with alloc_grid
 * @grid: dounle pointer to the grid
 * @height: height of the array
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}

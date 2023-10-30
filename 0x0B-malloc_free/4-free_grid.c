#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2D array
 * @grid: 2D grid
 * @height: height dimension of grid
 *
 * Description:
 * free_grid frees the memory of a 2D grid by iterating through each row
 * and freeing the individual arrays, then freeing the grid itself.
 *
 * Return: Nothing.
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

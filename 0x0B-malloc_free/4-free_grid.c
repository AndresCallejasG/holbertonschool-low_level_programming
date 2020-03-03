#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - free 2D array
 *
 * @grid: array
 * @height: height of the matrix
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	i = 0;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}

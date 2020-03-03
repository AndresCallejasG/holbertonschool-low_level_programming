#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - catenate two strings
 *
 * @width: width of the matrix
 * @height: height of the matrix
 *
 * Return: pointer to a 2 dimensional array of integers.
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	i = 0;
	j = 0;

	if (width <= 0 || height <= 0)
		return (0);

	grid = (int **) malloc(width * sizeof(int *));
	if (grid == 0)
		return (0);
	for (i = 0; i < width; i++)
	{
		grid[i] = (int *) malloc(height * sizeof(int));
		if (grid[i] == 0)
			return (0);
	}
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
			grid[i][j] = 0;
	}
	return (grid);
}

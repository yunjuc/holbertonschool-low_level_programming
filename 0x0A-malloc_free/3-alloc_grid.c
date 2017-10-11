#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - print a grid
 * @width: width of the grid
 * @height: height of the grid
 * Return: a grid initialized to 0
 *         NULL - failure, width or height = 0
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for ( ; i >= 0; i--)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
	}

	for (i = 0; i < height ; i++)
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	return (grid);
}

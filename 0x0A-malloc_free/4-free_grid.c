#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - free malloc pointers
 * @grid: pointer to grid array
 * @height: pointer to grid[i] array
 * Return: 0
 *         NULL - failure
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;
	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}

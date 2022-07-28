#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * free_grid - the savior
 *
 * This function frees a 2 dimensional grid
 * @grid: to free
 * @height: size
 *
 * Return: nada 0 nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}

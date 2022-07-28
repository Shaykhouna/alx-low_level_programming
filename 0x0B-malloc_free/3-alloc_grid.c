#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * alloc_grid - 2dimensions
 *
 * This function returns a pointer too a array
 * @width: arrays width
 * @height: array height
 *
 * Return: depending on args
 */
int **alloc_grid(int width, int height)
{
	int i, j, k, m;
	int **array;

	if (width <= 0 || height <= 0)
		return (NULL);
	array = malloc(height * sizeof(int *));
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));
		if (array[i] == NULL)
		{
			for (j = i; j >= 0; j--)
				free(array[j]);
			free(array);
			return (NULL);
		}
	}
	for (k = 0; k < height; k++)
	{
		for (m = 0; m < width; m++)
			array[k][m] = 0;
	}
	return (array);
}

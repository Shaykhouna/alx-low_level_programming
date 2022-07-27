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
	int size = width * height;
	int **array = (int *)calloc(size, sizeof(int));

	if (width <= 0 || height <= 0)
		return (NULL);
	return (**array);
	free(array);
}

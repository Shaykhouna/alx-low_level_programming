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
	int array[1][1];
	int size, i, j;
	int *arr;

	size = width * height;
	arr = malloc(sizeof(int) * size);
	if (width <= 0 || height <= 0)
		return (NULL);
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			array[i][j] = 0;
	arr = &array;
	return (arr);
}

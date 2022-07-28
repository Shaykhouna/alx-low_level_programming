#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - Create array
 *
 * This function  creates an array of integers
 * @min: mnimum
 * @max: maximum
 *
 * Return: retun 0
 */
int *array_range(int min, int max)
{
	int *array;
	int i;

	if (min > max)
		return (NULL);
	array = malloc(sizeof(max) * (max - min +1));
	for (i = min; i <= max; i++)
	{
		array[j] = i;
		j++;
	}
}

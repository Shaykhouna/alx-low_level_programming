#include "function_pointers.h"

/**
 * int_index - search
 *
 * This function that searches for an integer
 * @array: location
 * @size: array size
 * @cmp: comparator
 *
 * Return: the integer found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, try;

	if (array == NULL || cmp == NULL || size < 1)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}

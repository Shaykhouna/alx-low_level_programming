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
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}

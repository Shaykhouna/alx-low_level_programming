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

	if (size <= 0)
		return (-1);
	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			try = cmp(array[i]);
			if (try != 0)
				break;
		}
		if (try == 0)
			return (-1);
	}
	return (i);
}

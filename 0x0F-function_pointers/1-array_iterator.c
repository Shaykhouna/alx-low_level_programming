#include "function_pointers.h"

/**
 * array_iterator - Iterate fuc
 *
 * This function that executes a function on each element
 * @array: container
 * @size: size of array
 * @action: func pointer
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL && action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}

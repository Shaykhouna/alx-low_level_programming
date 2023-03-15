#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Array
 *
 * This function creates an array of chars
 * @size: size of array
 * @c: to initialize
 *
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == NULL)
		return (1);
	array = malloc(sizeof(char) * size);
	if
	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}

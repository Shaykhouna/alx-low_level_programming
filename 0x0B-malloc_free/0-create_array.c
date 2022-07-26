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

	array = malloc(sizeof(char) * size);
	if (size == 0)
		return (NULL);
	array[0] = c;
	return (array);
}

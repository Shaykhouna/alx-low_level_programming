#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _calloc - allocation
 *
 * This function allocates memory for an array
 * @nmemb: nbre of elements
 * @size: size of array
 *
 * Return: pointer to memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memory;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		exit (NULL);
	memory = malloc(size * nmemb);
	if (memory == NULL)
		exit (NULL);
	for (i = 0; i < (size * nmemb); i++)
		memory[i] = 0;
	return (memory);
}

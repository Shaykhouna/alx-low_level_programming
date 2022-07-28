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
	char *plac;

	if (nmemb == 0 || size == 0)
		return (NULL);
	memory = malloc(nmemb * size);
	if (memory == NULL)
		return (NULL);
	plac = memory;
	for (i = 0; i < (size * nmemb); i++)
		plac[i] = '\0';
	return (memory);
}

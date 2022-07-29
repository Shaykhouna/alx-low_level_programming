#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * malloc_checked - allocator
 *
 * This function allocates memory using malloc
 * @b: size to use
 *
 * Return: nothing
 */
void *malloc_checked(unsigned int b)
{
	void *check;

	check = malloc(b);
	if (check != NULL)
		return (check);
	else
		exit (98);
}

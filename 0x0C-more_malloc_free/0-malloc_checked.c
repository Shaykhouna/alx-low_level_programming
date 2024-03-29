#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocator
 *
 * This function allocates memory using malloc
 * @b: size to use
 *
 * Return: pointer to allocated memoryg
 */
void *malloc_checked(unsigned int b)
{
	void *check = malloc(b);

	if (check == NULL)
		exit(98);
	return (check);
}

#include <stdio.h>
#include <stdlib.h>
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

	check = (unsigned int *)malloc(sizeof(b));
	if (check == NULL)
		exit(98);
	return;
}

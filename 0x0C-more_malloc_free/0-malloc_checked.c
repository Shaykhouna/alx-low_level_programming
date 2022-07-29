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

	check = (int *)malloc(b);
	if (check == NULL)
		exit(98);
	return;
}

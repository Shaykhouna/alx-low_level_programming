#include "main.h"

/**
 * reverse_array - Reverser
 *
 * This function reverses the content of an array of integers
 * @a: the array
 * @n: number of elements
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n--; i++)
	{
		j = a[i];
		a[i] = a [n];
		a[n] = j;
	}
}

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
	int *arr = NULL;

	for (i = n - 1; i >= 0; i--)
		arr[-i - 1] = a[i];
	for (j = 0; j < n; j++)
		a[j] = arr[j];
}

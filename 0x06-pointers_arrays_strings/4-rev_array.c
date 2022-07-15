#include "main.h"
#include <string.h>

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
	int stock;

	for (i = 0; i <= n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		arr[n - i - 1] = temp;
	}


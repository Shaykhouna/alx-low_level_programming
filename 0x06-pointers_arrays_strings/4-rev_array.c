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
	int j = 0;
	int arr[n];

	while (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			arr[j] = a[-i];
			j++;
		}
		for (j = 0; j < n; j++)
			a[j] = arr[j];
	}
}

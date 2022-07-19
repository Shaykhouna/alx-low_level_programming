#include "main.h"
#include <string.h>

/**
 * print_diagsum - Diagonals operation
 *
 * This function prints the sum of the two diagonals of a square matrix
 * @a: first integer
 * @size: size wanted
 *
 * Return: nothing.
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = 0;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				sum1= sum1 + a [i][j];
		}
	}
	j = size;
	for (i = 0; i < len; i++)
	{
		j--;
		sum2 = sum2 + a[i][j];
	}
	_putchar(sum1 + '0');
	_putchar(sum2 + '0');
	
}

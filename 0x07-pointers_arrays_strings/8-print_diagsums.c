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
	int i, j;
	int sum1 = 0;
	int sum2 = 0;

	for (row = 0; row < size; row++)
	{
		i = (j * size) + j;
		sum1 += a[i];
	}
	for (j = 1; j <= size; j++)
	{
		i = (j * size) - j;
		sum2 += a[i];
	}
	_putchar(sum1 + '0');
	_putchar(", ");
	_putchar(sum2 + '0');
	
}

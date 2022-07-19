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

	while (i <= (size * size))
	{
		sum1= sum1 + a [i][j];
		i = i + size 1;
	}

	while (j < (size * size - 1))
	{
		sum2 = sum2 + a[i][j];
		j = j + size - 1;
	}
	_putchar(sum1 + '0');
	_putchar(", ");
	_putchar(sum2 + '0');
	
}

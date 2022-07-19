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
	int sum1 = 0;
	int sum2 = 0;

	while (i < size)
	{
		sum1 += a[((i * size)+ i)];
		sum2 += a[((i * size) + (size - i) - 1)];
		i++;
	}
	_putchar(sum1 + '0');
	_putchar(", ");
	_putchar(sum2 + '0');
	
}

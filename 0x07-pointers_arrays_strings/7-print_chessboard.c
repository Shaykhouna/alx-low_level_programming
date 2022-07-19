#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - Printer
 *
 * This function prints the chessboard
 * @a: array base
 *
 * Return: nothing.
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		_putchar('\n');
		i++;
	}
}

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

	for (i = 0; a[i][8]; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (j == 7 )
			{
				_putchar(a[i][j]);
				_putchar('\n');
			}
			else
				_putchar(a[i][j];
		}
	}
}

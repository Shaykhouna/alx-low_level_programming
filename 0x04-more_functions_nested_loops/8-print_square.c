#include "main.h"

/**
 * print_square - square
 *
 * This function prints a square
 * @size: used as variable
 *
 * Return: 0
 */
void print_square(int size)
{
	int side1;
	int side2;

	if (size > 0)
	{
		for (side1 = 0; side1 < size; side1++)
		{
			for (side2 = 0; side2 < size; side2++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}

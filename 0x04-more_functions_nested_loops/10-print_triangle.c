#include "main.h"

/**
 * print_triangle - Triangle
 *
 * This function prints a triangle
 * @size: variable
 *
 * Return: 0 when done
 */
void print_triangle(int size)
{
	int a;
	int b;

	if (size >= 1)
	{
		for (a = 1; a <= size; a++)
		{
			for (b = size - 1; b > 0; b--)
			{
				_putchar(' ');
				for (b = a; b > 0; b--)
				{
					_putchar('#');
					_putchar('\n');
				}
			}
		}
	}
	else
		_putchar('\n');
}

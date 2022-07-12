#include "main.h"

/**
 * print_array - printer
 *
 * This function prints n elements of an array of integers
 * @a: variable one
 * @n: variable two
 *
 * Return: none
 */
void print_array(int *a, int n)
{
	int i;
	int cnt = *a;

	for (i = 0; i < n; i++)
	{
		cnt = a[i];
		_putchar(cnt);
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
}

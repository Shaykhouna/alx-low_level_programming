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
	int a_size = sizeof(*a) / sizeof(a[0]);

	if (n <= 0)
	{
		_putchar('\n');
	}
	else if (n > 0 || n <= a_size)
	{
		for (i = 0; i < n; i++)
		{
			cnt = a[i];
			if (i != n - 1)
			{
				printf("%d, ", cnt);
			}
			else
			{
				printf("%d\n", cnt);
			}
		}
	}
}

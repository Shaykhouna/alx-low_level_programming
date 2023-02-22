#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - numbers to 98
 *
 * This function that prints all natural numbers from n to 98
 * @n: the variable use as reference
 *
 * Return: return 0 when done
 */
void print_to_98(int n)
{
	int pos;

	if (n > 98)
	{
		for (pos = n; pos > 98; pos--)
		{
			printf("%d, ", pos);
		}
	}
	else
	{
		for (pos = n; pos < 98; pos++)
		{
			printf("%d, ", pos);
		}
	}
	printf("98\n");
}

#include "main.h"

/**
 * swap_int - swap values
 *
 * This function swaps the values of two integers
 * @*a: used as int1
 * @*b use as int2
 *
 * Return: no return value
 */
void swap_int(int *a, int *b)
{
	int pa;
	int pb;
	int *change;

	pa = *a;
	pb = *b;
	change = pb;
	*b = a;
	*a = change;
}

#include "main.h"
#include <string.h>

/**
 * reverse_array - Reverser
 *
 * This function reverses the content of an array of integers
 * @a: the array
 * @n: number of elements
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{	
	int i;
	char *start, *end, temp;
	int len = strlen(a);

	start = a;
	end = a;
	for (i = 0; i < (len - 1); i++)
		end++;
	for (i = 0; i < len/2; i++)
	{
		temp = *end;
		*end = *start;
		*start = temp;
		start++;
		end--;
	}
}

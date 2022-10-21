#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a != b && b != c && a != c)
	{
		if (a > b && a > c)
		{
			largest = a;
			continue;
		}
		else if (b > a && b > c)
		{
	        	largest = b;
			continue;
		}
		else if (c > a && c > b)
		{
			largest = c;
			continue;
		}
		continue;
	}
	return (largest);
}

#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: value source
 * @index: based repere
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = 1, length = 0;

	if (!n)
		return (-1);
	while (length++ < index)
	{
		if (length >= MAX_COUNT)
			return (-1);
		i = i << 1;
	}
	if (*n & i)
		*n ^= i;
	return (1);
}

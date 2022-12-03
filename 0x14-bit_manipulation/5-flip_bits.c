#include "main.h"

/**
 * flip_bits -  returns the number of bits you would need to flip to get from one number to another
 * @n: source of value
 * @m: the other one
 *
 * Return: numbers of bit
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int temp, i = 1, count = 0;

	temp = n ^ m;
	while (temp >= 1)
	{
		if (i & temp)
			count++;
		if (count >= MaX_COUNT)
			return (count);
		i = i << 1;
	}
	return (count);
}

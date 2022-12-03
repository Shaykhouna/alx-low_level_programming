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
	unsigned long int temp = n ^ m, count = 0;

	while (temp > 0)
	{
		count += (temp & 1);
		count >>= 1;
	}
	return (count);
}

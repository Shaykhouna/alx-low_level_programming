#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int numb = 1;
	char *ender = (char *)&numb;

	if (*ender == 1)
		return (1);
	return (0);
}

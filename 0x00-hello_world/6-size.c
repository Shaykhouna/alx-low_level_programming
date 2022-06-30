#include <stdio.h>

/**
 *main - Size is not grandeur, and territory does not make a nation
 * 
 *This program prints the size of various types
 *compiled and run on the computer
 *
 * Return: Again return 0 when success
 */
int main(void)
{
	char mot
	int i
	long int li
	long long int lli
	float dec

	printf(" Size of a char: %lu", (unsigned long)sizeof(mot), " byte(s)\n");
	printf(" Size of an int: %lu", (unsigned short)sizeof(i), "byte(s)\n");
	printf(" Size of a long int: %lu", (unsigned)sizeof(li), "byte(s)\n");
	printf(" Size of a long long: %lu", (unsigned long)sizeof(lli), "byte(s)\n");
	printf(" Size of a float: %lu", (unsigned long)sizeof(lli), "byte(s)\n");
	return (0);
}

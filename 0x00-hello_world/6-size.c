#include <stdio.h>

/**
 * main - Size is not grandeur, and territory does not make a nation
 * 
 * This program prints the size of various types
 * compiled and run on the computer
 *
 * Return: Again return 0 when success
 */
int main(void)
{
	char mot;
	int i;
	long int li;
	long long int lli;
	float dec;

	printf(" Size of a char: %lu.\n", (unsigned long)sizeof(mot), " byte(s)");
	printf(" Size of an int: %lu.\n", (unsigned short)sizeof(i), "byte(s)");
	printf(" Size of a long int: %lu.\n", (unsigned int)sizeof(li), "byte(s)");
	printf(" Size of a long long: %lu.\n", (unsigned long)sizeof(lli), "byte(s)");
	printf(" Size of a float: %lu.\n", (unsigned long)sizeof(lli), "byte(s)");
	return (0);
}

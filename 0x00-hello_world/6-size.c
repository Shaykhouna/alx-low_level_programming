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

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(mot));
	printf("Size of an int: %lu byte(s)\n", (unsigned int)sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long int)sizeof(li));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long long int)sizeof(lli));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(dec));
	return (0);
}

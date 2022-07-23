#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - multiplier
 *
 * This program that multiplies two numbers.
 * @argc: count
 * @argv: array
 *
 * Return: always 0
 */
int main(int argc, char* argv[])
{
	int mult, i;

	res = 1;
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
		res = res * atoi(argv[i]);
	printf("%i\n", res);
	return (0);
}

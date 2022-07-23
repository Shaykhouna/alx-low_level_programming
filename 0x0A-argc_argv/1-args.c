#include <stdio.h>
#include <stdlib.h>

/**
 * args - arguments
 *
 * This program prints the number of arguments
 * @argc: count
 * @argv: array
 *
 * Return: number of args
 */
int args(int argc; char* argv[])
{
	int args;

	args = argc - 1;
	printf("%d\n", args);
	return (0);
}

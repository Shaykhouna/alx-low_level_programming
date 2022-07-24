#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - arguments
 *
 * This program prints the number of arguments
 * @argc: count
 * @argv: array
 *
 * Return: number of args
 */
int main(int argc, char *argv[])
{
	if (argc != 0)
		printf("%d\n", argc - 1);
	return (0);
}

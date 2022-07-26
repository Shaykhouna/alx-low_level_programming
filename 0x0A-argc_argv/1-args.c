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
	int i;
	int count;

	for (i = 0; i < argc; i++)
		count++;
	printf("%d\n", count);
	return (0);
}

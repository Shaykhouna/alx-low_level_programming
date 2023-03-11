#include <stdio.h>
#include <stdlib.h>

/**
 * main - print args
 *
 * This program prints arguments
 * @argc: count
 * @argv: arguments array
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}

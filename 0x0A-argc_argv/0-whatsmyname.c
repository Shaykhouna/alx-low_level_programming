#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - name
 *
 * This program prints its name, followed by a new line
 * @argc: count
 * @argv: array
 *
 * Return: value int
 */
int main(int argc, char *argv[])
{
	if (argc != 0)
		printf("%s\n", argv[0]);
	return (0);
}

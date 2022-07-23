#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - multiplier
 *
 * This program that multiplies two numbers.
 * @argc: count
 * @argv: array
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	if (argc > 1 && argc < 4)
		printf("%s\n", argv[1] * argv[2]);
	else 
		printf("Error\n");
	return (0);
}

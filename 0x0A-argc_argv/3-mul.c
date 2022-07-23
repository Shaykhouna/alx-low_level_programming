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
	int result = 0;
	int a = 0;
	int b = 0;

	if (argc <= 1 || argc >= 4)
		printf("Error\n");
	a = argv[1];
	b = argv[2];
	result = a * b;
	printf("%d\n", result);
	return (0);
}

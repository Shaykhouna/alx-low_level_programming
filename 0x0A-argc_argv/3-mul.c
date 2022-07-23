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
	int result;

	if (argc <= 1 || argc >=4)
		printf("Error\n");
	else
		result = argv[1] * argv[2];
		printf("%d\n", result);
	return (0);
}

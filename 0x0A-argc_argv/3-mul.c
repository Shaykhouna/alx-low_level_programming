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
	int a = 0;
	int b = 0;

	if (argc > 1 && argc < 4)
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
	else 
		printf("Error\n");
	return (0);
}
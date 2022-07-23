#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - addition
 *
 * This program add positive numbers
 * @argc: count
 * @argv: array
 *
 * Return: always 0
 */
int main(int argc, char* argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
		if (argc == 1)
			printf("0\n");
		else if !(argv[i] >= 0 && argv[i] <= 9)
		{
			printf("Error\n");
			return (1);
		}
		else
			multiple = 1 * argv[i];
	printf(("%d\n", multiple);
	return (0);
}

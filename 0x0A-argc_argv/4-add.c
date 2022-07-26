#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - addition
 *
 * This program add positive numbers
 * @argc: count
 * @argv: array
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i = 0;
	int sum = 0;

	if (argc == 1)
		printf("0\n");
	for (i = 0; i < argc; i++)
	{
		if (isdigit(argv[i]) != 1)
		{
			printf("Error\n");
			return (1);
		}
		sum += argv[i];
		printf("%d\n", sum);
	}
	return (0);
}

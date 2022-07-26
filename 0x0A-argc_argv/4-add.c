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
	for (i = 1; i < argc; i++)
	{
		if (isdigit(atoi(argv[i])) == 0)
		{
			printf("Error\n");
			return (1);
		}
		else
			sum += argv[i];
	}
	printf("%d\n", sum);
	return (0);
}

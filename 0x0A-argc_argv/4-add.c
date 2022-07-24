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
	int try = 0;
	int turn;

	if (argc < 2)
		printf("0\n");
	for (i = 1; i < argc; i++)
	{
		turn = atoi(argv[i]);
		if (isdigit(turn) != 1)
		{
			printf("Error\n");
			return (1);
		}
		try += atoi(argv[i]);
	}
	printf("%d\n", try);
	return (0);
}

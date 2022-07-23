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
	int i, res;
	int try = 0;
	int use;

	if (argc < 2)
		printf("0\n");
	for (i = 1; i < argc; i++)
	{
		res = isdigit(argv[i]);
		if (res == 0)
		{
			printf("Error,\n");
			return (1);
		}
		use = atoi(argv[i]);
		try += use;
	}
	printf("%d\n", try);
	return (0);
}

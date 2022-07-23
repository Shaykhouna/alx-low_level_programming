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
int main(int argc, char* argv[])
{
	int i, res;
	unsigned int j; multiple;

	res = 0;
	for (i = 0; i < argc; i++)
	{
		multiple = strlen(argv[i]);
		for (j = 0; j < multiple; j++)
		{
			if (isdigit(*(argv[i] + j)) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		res = res + atoi(argv[i]);
	}
	printf("%i\n", res);
	return (0);
}

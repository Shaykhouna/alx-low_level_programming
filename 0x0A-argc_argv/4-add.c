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
	int sum = 0;
	while (--argc)
	{
		if (isInt(argv[argc]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[argc]);
	}
	printf("%i\n", sum);
	return (0);
}

/**
 * isInt - check type
 * @var: variable to check
 *
 * Return: nada
 */
int isInt(char *)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] < '0' || s > '9')
			return (1);
		i++;
	}
	return (0);
}

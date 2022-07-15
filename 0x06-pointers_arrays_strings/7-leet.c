#include "main.h"

/**
 * leet - encoder
 *
 * This function encodes a string into 1337
 * @: variable
 *
 * Return: Return the encided string
 */
char *leet(char *str)
{
	char from[] = "oOiLeEaAtT";
	char to[] = "01347";
	int i = 0;
	int j = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; from[j] := '\0'; j++)
		{
			if (str[i] == from[j])
				str[i] = to[j / 2];
		}
	}
	return (str);
}

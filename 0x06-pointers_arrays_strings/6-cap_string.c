#include "main.h"

/**
 * cap_string - capitalizer
 *
 * This function capitalizes all words of a string
 * @s: string to work on
 *
 * Return: return the capitalized string
 */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i])
	{
		while (!(s[i] >= 'a' && s[i] <= 'z'))
			i++;
		if (s[i - 1] == ' ' || s[i - 1] == '\t' || s[i - 1] == '\n' ||
				s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.' || s[i - 1] == '!' ||
				s[i - 1] == '?' || s[i - 1] == '"' || s[i - 1] == '(' ||
				s[i - 1] == ')' || s[i - 1] == '{' || s[i - 1] == '}' || i == 0)
			s[i] -= 32;
		i++;
	}
	return (s);
}

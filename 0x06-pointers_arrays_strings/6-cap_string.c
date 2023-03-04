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
	int j = 0;
	int cap;
	char ch[] = ",;.!?(){}\n\t\" ";

	for (i = 0, cap = 0; s[i] != '\0'; i++)
	{
		if (s[0] >= 'a' && s[0] <= 'z')
			cap = 1;
		for (j = 0; ch[j] != '\0'; j++)
		{
			if (ch[j] == s[i])
				cap = 1;
		}
	}
	while (cap)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
			cap = 0;
		}
		else if (s[i] >= 'A' && s[i] <= 'Z')
	cap = 0;
		else if (s[i] <= 0 && s[i] <= 9)
			cap = 0;

	}
	return (s);
}

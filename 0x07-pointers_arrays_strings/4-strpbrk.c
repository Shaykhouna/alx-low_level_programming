#include <stdio.h>

/**
 * _strpbrk - searcher
 *
 * This function searches a string for any of a set of bytes.
 * @s: research base
 * @accept: byte to lookup
 *
 * Return: pointer to byte s
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;
	int pos;
	int loc;

	for (i = 0; s[i] != '\0'; i++)
		pos = i;
	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[i] != '\0'; j++)
		{
			if (saccept[i] == s[j])
			{
				if (j <= pos)
				{
					pos = j;
					loc = 1;
				}
			}
		}
	}
	if (loc == 1)
		return (&s[pos]);
	else
		return (NULL);
}

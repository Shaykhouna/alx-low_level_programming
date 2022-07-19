#include "main.h"

/**
 * _strstr - Locator
 *
 * This function locates a substring
 * @haystack: to look in
 * @needle: to look for
 *
 * Return: pointer to located or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*haystack && needle[i] != '\0')
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[i] != needle[i])
				break;
		}
		if (i != s)
			haystack++;
		else
			return (haystack);
	}
	return (NULL);
}

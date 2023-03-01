#include "main.h"
/**
* *_strcat - concatenates two strings
* @dest : first string
* @src: second string
*Return: returns the concatenated string
*
*
*/
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i++])
	{
		j++;
	}
	for (i = 0; src[i]; i++)
	{
		dest[j++] = src[i];
	}
	return (dest);
}

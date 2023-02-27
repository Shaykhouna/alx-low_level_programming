#include "main.h"
/**
* _strle - gets the length of a string
* @s: string
*
*Return: returns the length
*
*
*/
int _strle(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
/**
* _strcpy - copies the string pointed to src to the dest pointers
* @dest: pointer to return
* @src: pointer to copy
*Return: returns the pointer dest
*
*
*/
char *_strcpy(char *dest, char *src)
{
	int j;

	for (j = 0; j <= _strle(src); j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}

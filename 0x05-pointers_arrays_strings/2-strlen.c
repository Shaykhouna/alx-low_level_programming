#include "main.h"

/**
* _strlen - gets the length of a given string using pointers
* @s: str to get length of
*
*Return: returns the string length
*
*
*/
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
		s++;
	}
	return (i);
}

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
	int i;

	i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}

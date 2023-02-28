#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * rev_string - reverse
 *
 * This function reverses a string
 * @s: variable
 *
 * Return: none
 */
void rev_string(char *s)
{
	int i;
	char str = s[0];
	int cnt = 0;

	while (s[cnt] != '\0')
		cnt++;
	for (i = 0; i < cnt; i++)
	{
		cnt--;
		str = s[i];
		s[i] = s[cnt];
		s[cnt] = str;
	}
}

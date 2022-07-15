#include "main.h"
#include <ctype.h>

/**
 * string_toupper - change string
 *
 * This function changes all lowercase to uppercase
 * @: string to change
 *
 * Return: return the changed string
 */
char *string_toupper(char *str)
{
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}

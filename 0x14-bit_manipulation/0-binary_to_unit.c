#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b:  pointing to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * 
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
        unsigned int sum, puiss;
        int length;

        if (b == NULL)
                return (0);
        for (length = 0; b[length]; len++)
        {
                if (b[length] != '0' && b[length] != '1')
                        return (0);
        }
        for (puiss = 1, sum = 0, len--; len >= 0; len--, puiss *= 2)
        {
                if (b[length] == '1')
                        sum += puiss;
        }
        return (sum);
}

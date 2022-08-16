#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Returns the number of elements
 * @h: points to head of listint
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		node++;
		h = h->next;
	}
	return (node);
}

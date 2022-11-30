#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listsint - Printer
 * @h: Pointer to head of list_t
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h);
		h = h->next;
	}
	return (node);
}

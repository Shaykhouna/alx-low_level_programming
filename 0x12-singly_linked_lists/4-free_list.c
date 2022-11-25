#include "lists.h"

/**
 * free_list - freeing list
 * @head: point to head of list
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		free(head->str);
		temp = head->next;
		free(head);
		head = temp;
	}
}

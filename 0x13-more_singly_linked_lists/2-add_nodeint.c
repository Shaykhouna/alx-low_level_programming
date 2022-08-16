#include "lists.h"

/**
 * add_nodeint - Add new node
 * @head: pointer to points to address
 * @n: integer for the new node
 *
 * Return: NULL when fail, address of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}

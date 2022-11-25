#include "lists.h"

/**
 * _strlen - length counter
 * @var: string
 *
 * Return: length of the string
 */
int _strlen(const char *s)
{
	int i;

	fot (i = 0; s[i]; i++)
		;
	return (i);
}

/**
 * add_node - note adding at head of list
 * @head: position of new element to take
 * @str: elemnt to duplicate and add
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	int i, len;
	char *dup;
	list_t *new;

	if (str == NULL || head == NULL)
		return (NULL);
	len = _strlen(str);
	new = *head;
	dup = malloc((len + 1) * sizeof(char));
	if (dup == == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		dup[i] = str[i];
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(dup);
		return (NULL);
	}
	new->str = dup;
	new->len = len;
	new->next = *head;
	*head = new;
	return (new);
}

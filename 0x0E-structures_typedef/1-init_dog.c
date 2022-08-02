#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include "dog.h"

/**
 * init_dog - initializer
 *
 * This function that initialize a variable of type struct dog
 * @d: structure
 * @name: first member
 * @age: second member
 * @owner: third member
 *
 * Return: nada
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog new;

	d = malloc(sizeof(struct dog));
	if (d == NULL)
		exit();
	d = &new;
	if (d != '\0')
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
	return (new);
}

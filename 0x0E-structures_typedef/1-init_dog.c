#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
#include "main.h"

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

	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
		if (d == NULL)
			return;
	}
	d = &new;
	d->name = name;
	d->age = age;
	d->owner = owner;
}

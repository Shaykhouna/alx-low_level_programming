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
struct dog *new(char *name, float age, char *owner)
{
	struct dog *d;

	d = malloc(sizeof(stuct dog));
	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog doggo;

	d = &doggo;
	d = new(name, age, owner);
}

#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include "dog.h"

/**
 * print_dog - printer
 *
 * This function that prints a struct dog
 * @d: variable base
 *
 * Return: nada
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		exit();
	if (name == NULL)
		d->name = "nil";
	if (age == NULL)
		d->age = "nil";
	if (owner == NULL)
		d->owner = "nil";
	printf("Name: %s\n", d.name);
	printf("Age: %s\n", d.age);
	printf("Owner: %s\n", d.owner);
}

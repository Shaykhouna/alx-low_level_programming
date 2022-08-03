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
	struct dog new {name, age, owner};
	struct dog *d = malloc(sizeof(struct dog));
	d = &new;
}

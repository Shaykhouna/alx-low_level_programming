#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include "main.h"

/**
 * new_dog - Doggo
 *
 * This function that creates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: dog created
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggo;

	doggo = malloc(sizeof(dog_t));
	if (doggo == NULL)
		return (NULL);
	doggo->name = name;
	doggo->age = age;
	doggo->owner = owner;
	return (doggo);
}

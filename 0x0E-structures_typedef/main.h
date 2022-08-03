#include <stdio.h>
#include <stdlib.h>
#ifndef MAIN_H
#define MAIN_H

/**
 * main - Header File
 *
 * This is the header file of prototypes
 *
 * Return: nada
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

#endif /* MAIN_H */

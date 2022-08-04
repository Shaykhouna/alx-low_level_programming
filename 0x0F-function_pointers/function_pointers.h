#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/**
 * main - header 
 *
 * This is the header file for prototypes
 *
 * return: nada
 */
int _putchar(char c);

void print_name(char *name, void (*f)(char *));

void array_iterator(int *array, size_t size, void (*action)(int);

int int_index(int *array, int size, int (*cmp)(int));)

#endif /* FUNCTION_POINTERS_H */

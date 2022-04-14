#ifndef _HEADER_
#define _HEADER_
#include <stdlib.h>

void print_name(char *na√me, void (*f)(car *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif

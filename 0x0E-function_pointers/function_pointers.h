#ifndef function_pointers_h
#define function_pointers_h

int _puchar(char);
void print_name(char *, void (*)(char *));
#include <stddef.h>
void array_iterator(int *, size_t, void (*)(int));
int int_index(int *, int size, int (*)(int));

#endif

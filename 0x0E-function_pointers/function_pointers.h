#ifndef funcction_pointers.h
#define function_pointers.h

int _puchar(char);
void print_name(char *, void (*)(char *));
void array_iterator(int *, size_t, void (*)(int));
int int_index(int *, int size, int (*)(int));

#endif

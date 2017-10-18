#ifndef funcction_pointers_h
#define function_pointers_h

int _puchar(char);
void print_name(char *, void (*)(char *));
int int_index(int *, int size, int (*)(int));

#endif

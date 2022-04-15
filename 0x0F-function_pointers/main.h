#ifndef FUNCTION_POINTERS
#define FUNCTION_POINTERS
#include <stdlib.h>
#include <stdio.h>

void print_name(char *name, void (*f)(char *));

#endif

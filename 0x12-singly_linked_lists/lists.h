#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <string.h>

typedef struct list
{
	char *str;
	struct list *next;
} list_t;

size_t print_list(const list_t *h);

#endif

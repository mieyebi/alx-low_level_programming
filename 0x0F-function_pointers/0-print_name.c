#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* print_name - prints a name
*
* @name: name
*
* @f: pointer to function
*
*/

void print_name(char *name, void (*f)(char *))
{
	if (name == 0)
		f("");
	f(name);
}

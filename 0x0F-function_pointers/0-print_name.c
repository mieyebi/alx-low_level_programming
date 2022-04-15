#include <stdio.h>
#include <stdlib.h>

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
		return f("");
	f(name);
}

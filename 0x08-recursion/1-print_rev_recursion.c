#include "main.h"
#include <stdio.h>

/**
* _print_rev_recursions - prints a string in reverse
*
* @s: pointer to a string
*
*/
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	s++;
	_putchar(s)
}

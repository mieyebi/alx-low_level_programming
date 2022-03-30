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
	int n = 0;

	if (*(s + n) != '\0')
	{
		n++;
	}
/**	if (*(s + n) == '\0')
*/
	_putchar(*(s + n));
		n--;
		_print_rev_recursion(s);
}

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

	if (*s != '\0')
	{
		n++;
	}

	_putchar(*(s + n));
	n--;
	_print_rev_recursion(s);

	if (n < 0)
	{
		return;
	}
}

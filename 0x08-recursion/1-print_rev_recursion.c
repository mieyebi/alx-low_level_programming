#include "main.h"
#include <stdio.h>

/**
* _print_rev_recursion - prints a string in reverse
*
* @s: pointer to a string
*
*/
void _print_rev_recursion(char *s)
{
	int a = 0;

	if (*(s + a) == '\0')
	{
		return;
	}
	else if (*(s + a) != '\0')
	{
		a++;
		_print_rev_recursion(s + a);
		_putchar(*(s + (a - 1)));
	}
}

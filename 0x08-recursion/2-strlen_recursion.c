#include "main.h"
#include <stdio.h>

/**
* _strlen_recursion - returns the length of a string
*
* @s: s is a string of characters
*
*/

int _strlen_recursion(char *s)
{
	int a, n;

	n = 0;

	if (*s != '\0')
	{
		s++;
		n++;
	}
	_strlen_recursion(s);
	a = n + 1;
	return (a);
}

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
	int a = 0;
	s++;
	a++;

	_strlen_recursion(s);

	if (*s == '\0')
	{
		return (a);
	}
	return (a);
}

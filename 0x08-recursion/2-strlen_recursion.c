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
	if (*(s + a) != '\0')
	{
		a++;
	}
	return ((a + 1) + _strlen_recursion(s));
}

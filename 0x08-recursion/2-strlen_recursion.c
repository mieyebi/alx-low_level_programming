#include "main.h"
#include <stdio.h>

/**
* _strlen_recursion - returns the length of a string
*
* @s: s is a string of characters
* Return: a on success
*/

int _strlen_recursion(char *s)
{

	if (*s == '\0')
	{
		return (1);
	}
	else
	s++;
	return (1 + _strlen_recursion(s));
}

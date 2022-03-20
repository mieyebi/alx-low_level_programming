#include <stdio.h>
#include "main.h"

/**
* _isupper - checks for uppercase characters
* @c - is an integer
* Return: 1 if uppercase, otherwise 0
*/

int _isupper(int c)
{
	if ('A' >= c && c >= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

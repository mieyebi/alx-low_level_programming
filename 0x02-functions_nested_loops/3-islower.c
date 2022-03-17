#include <stdio.h>
#include "main.h"
/**
* _islower - checks lowercase alphabets
* int c - is an integer
* Return: 1 for lowercase alphabets else 0
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{	if (_islower(c))
			return (1);
		else
			return (0);
	}
	return (1);
}

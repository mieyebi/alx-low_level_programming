#include <stdio.h>
#include "main.h"
/**

* printing lower alphabets with _islower
* int c - is a lower case alphabet
* _islower - checks lower case characters
* Return: 1 for lowercase alphabets else 0
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		if (_islower(c))
		{
			return (1);
		}
		else
		{
			return (0);
		}
	return (1);
	}
	else
	{
	return (0);
	}
	
}


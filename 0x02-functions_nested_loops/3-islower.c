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
		if (_islower(c) >= 'a' && <= 'z')
		{
			return (1);
		}
		else
		{
			return (0);
		}
}


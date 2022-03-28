#include "main.h"
#include <stdio.h>

/**
* *_memset - fills the function with b
*
* @s: string of characters
*
* @b: constant char byte
*
* @n: the first number of bytes
*
* Return: s on success
*
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int c;

	for (c = 0; c < n; c++)
	{
		 (s + c) = b;
	}
	return (s);
}

#include "main.h"
#include <stdio.h>

/**
* _strspn - gets the length of a prefix substring
*
* @s: initial string
*
* @accept: prefix string
*
* Return: 0 on success
*
*/
unsigned int _strspn(char *s, char *accept)
{
	int a = 0;

	while (*(accept + a) != '\0')
	{
		*(s + a) = *(accept + a);
		a++;
		return (*(s + a));
	}
	return (0);
}

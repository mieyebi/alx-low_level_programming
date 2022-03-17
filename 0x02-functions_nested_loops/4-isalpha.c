#include <stdio.h>
#include "main.h"

/**
* _isalpha - checks for uppercase alphabet
* int c - @c is an integer
* Return - returns 0 on suceess, otherwise 1
*
*/
int _isalpha(int c)
{	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

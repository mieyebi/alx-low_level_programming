#include "main.h"
#include <stdio.h>

/**
* _pow_recursions - prints x rasied to the power of y
*
* @x: an integer
*
* @y: an integer
*
* Return: an integer
*
*/

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	if (y == 1)
	{
		return (x);
	}
	x = x * _pow_recursion(x, --y);
	return (x);
}

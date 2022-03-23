#include <stdio.h>
#include "main.h"

/**
* _abs - computes the absolute value of an integer
*
* @a: is an integer
*
* Return: absolute value on success
*/
int _abs(int a)
{
	if (a >= 0)
	{
		return (a);
	}
	else
	{
		return (-1 * a);
	}
}

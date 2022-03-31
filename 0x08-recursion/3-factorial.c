#include "main.h"
#include <stdio.h>

/**
* factorial - factorial of a given integer
*
* @n: an integer
*
* Return: n factorial
*
*/
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}

	else if (n < 0)
	{
		return (-1);
	}
	n = n * factorial(n - 1);
	return (n);
}

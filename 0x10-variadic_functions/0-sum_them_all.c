#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* sum_them_all - returns the sum of all parameters
*
* @n: argument count
*
* Return: sum or 0
*
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int a, sum;

	sum = 0;

	va_start(ap, n);

	if (n == 0)
		return (0);
	for (a = 0; a < n; a = va_arg(ap, unsigned int))
	{
		sum += va_arg(ap, unsigned int);
	}
	va_end(ap);
	return (sum);
}

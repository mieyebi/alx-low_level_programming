#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
#include <stdlib.h>

/**
* print_numbers - prints numbers
*
* @separator: string to be printed between numbers
*
* @n: number of integers in function parameter
*
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int a;

	va_start(num, n);

	for (a = 0; a < n && n > 0; a++)
	{
		if (separator != 0 && a != n - 1)
			printf("%d%s", va_arg(num, unsigned int), separator);
		else
			printf("%d", va_arg(num, unsigned int));
		if (n == 0)
			return;
	}
	va_end(num);
	putchar('\n');
}

#include <stddef.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
* print_strings - prints strings
*
* @separator: string to be printed between strings
*
* @n: the number of strings passed to the function
*
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	char *b;
	unsigned int a = 0;

	va_start(str, n);

	for (a = 0; a < n; a++)
	{
		b = va_arg(str, char *);

		if (b != NULL)
			printf("%s", b);

		else if (b == NULL)
			printf("(nil)");

		if (separator != 0 && a != n - 1)
			printf("%s", separator);

		if (n == 0)
			return;
	}
	va_end(str);
	putchar('\n');
}

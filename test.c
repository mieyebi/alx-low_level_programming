#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdarg.h>


/**
* _printf - a new printf function
*
* @format: a format to print
*
* Return: the number of characters printed
*
*/
/**
*int _printf(const char *format, ...)
{
}
*/
int p_string(const char *format)
{
	int a = 0;

	if (format != 0)
	{
		while (format[a] != '\0')
		{
			putchar(format[a]);
			a++;
		}
		putchar('\n');
	}
return (a);
}


int main (void)
{
	p_string("lo nger");
	return (0);
}

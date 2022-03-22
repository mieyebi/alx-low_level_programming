#include <stdio.h>
#include "main.h"
#include <string.h>
/**
* _puts - prints a string
* @str: a string of characters
*/
void _puts(char *str)
{
	int b;

	b = strlen(str);

	for (b >= 0; b != '\0'; b++)
	{
		_putchar(str[b]);
	}
	_putchar('\n');
}

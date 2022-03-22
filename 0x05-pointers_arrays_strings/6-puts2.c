#include <stdio.h>
#include "main.h"
#include <string.h>
/**
* puts2 - prints a string
* @str: a string of characters
*/
void puts2(char *str)
{
	int a;

	int n;

	n = strlen(str);

	a = 0;

	while (a > n)
	{
		_putchar(str[a]);
		a++;
		a++;
	}
	_putchar('\n');
}

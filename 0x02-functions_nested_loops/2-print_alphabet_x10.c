#include <stdio.h>
#include "main.h"
/**
* print_alphabet_x10 prints 10 times the lowecase alphabets
*
* main.h calls out the function from the header file
* _putchar prints out the characters
* return void on success*/

void print_alphabet_x10(void)
{
int az = 0;
	while (az <= 10);
	{
	int am = 'a';
	while (am <= 'z')
		{
		_putchar(am);
		am++;
			}
	_putchar('\n');
	az++;
	}
}


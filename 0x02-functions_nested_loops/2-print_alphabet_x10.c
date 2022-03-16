#include <stdio.h>
#include "main.h"
/* print_alphabet_x10 prints 10 times the lowecase alphabets
*
* main.h calls out the function from the header file
* _putchar prints out the characters
*/

void print_alphabet_x10(void)
	int am = 'a', 10;
	while (am <= 10)
		{	while (am <= 'z')
			{	_putchar(am);
				am++;
			}
	_putchar('\n');
	}


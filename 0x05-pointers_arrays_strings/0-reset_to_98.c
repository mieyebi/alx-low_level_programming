#include <stdio.h>
#include "main.h"

/**
* reset_to_98 - resets an integer to 98
* @n: pointer to an integer
*/
void reset_to_98(int *n)
{
	printf("%p\n", n);
	*n = 98;
}
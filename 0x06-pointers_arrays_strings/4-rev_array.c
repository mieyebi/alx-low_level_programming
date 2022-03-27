#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* reverse_array : reverses the content of an array
* @a: pointer
* @n: number of elements of the array
*
*/

void reverse_array(int *a, int n)
{
	while (*(a + n) != '\0' && n >= 0)
	{
		n--;
	}
}

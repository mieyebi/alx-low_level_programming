#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* reverse_array : reverses the content of an array
* @a: pointer
* @n: number of elements of the array
* Return
*/
void reverse_array(int *a, int n)
{
	n = sizeof(a);

	while ((n >= 0) && (a[n] != '\0'))
	{
		a--;
	}
}

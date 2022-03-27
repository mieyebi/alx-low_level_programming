#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* reverse_array - reverses the content of an array
* @a: pointer
* @n: number of elements of the array
*
*/

void reverse_array(int *a, int n)
{
	int x, z;

	z = 0;

	while ((z = n - 1))
	{
		for (x = 0; x < n; x++)
		{
			int y;
			y = *(a + z);
			*(a + z) = *(a + x);
			*(a + x) = y;
		}
		n--;
		z--;
	}
}

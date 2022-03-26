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
/**	int z;

	z = (n - 1);

	while (n != 0)
	{
		*(a + z);
		z--;
	}
}
*/
	int z = n - 1;

	while (n > z)
	{
		if ((n > 0) && (a[n] != '\0'))
		{
			a[z];
		}
		z--;
	}
}

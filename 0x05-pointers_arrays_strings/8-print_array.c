#include "main.h"
#include <string.h>

/**
* print_array - prints elements of an array individually
*
* @a: *a is a string
*
* @n: integer n, n is the number of elements in the array
*
*/

void print_array(int *a, int n)
{
	int z;

	for (z = 0; z < n; z++)
	{
		printf("%d, ", a[z]);
		{
			if ((z = (n - 1)))
			{
				printf("%d", a[z]);
			}
		}
	}
	printf("\n");
}

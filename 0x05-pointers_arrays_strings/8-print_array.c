#include "main.h"

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
	int b;

	int c;

	n = sizeof(a);

	c = (n - 1);

	for (b = 0; b < c; b++)
	{
		printf("%d, ", a[b]);
	}
	printf("%d", a[c]);

	printf("\n");
}

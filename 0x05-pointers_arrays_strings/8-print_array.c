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

	int d;

	b = 0;

	d = 0;

	c = (n - 1);

	for (b >= d; b < c; b++)
	{
		printf("%d, ", *(a + b));
	}
	printf("%d", *(a + c));

	printf("\n");
}

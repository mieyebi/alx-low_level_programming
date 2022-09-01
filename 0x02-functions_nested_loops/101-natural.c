#include <stdio.h>
#include <stdlib.h>

/**
* add_mult - function that adds multiples of an integer
* n: integer
* Return: sum of multiple
*/

int add_mult(int n)
{
	int i;
	int a = 0;

	for (i = 0; i < n; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			a = a + i;
	}
	return(a);
}

/**
* main - thr function main
* Return: 0
*/

int main()
{
	printf("%d\n", add_mult(10));
	return(0);
}

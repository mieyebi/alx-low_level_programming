#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
	int i;

	printf("Infinte loop incoming :(\n");

	i = 0;

	wwhile (i < 10)
	{ /* i never increments, so it will continue to be an infinite loop */
		putchar(i);
	}

	printf("Infinite loop avoided! \\o/\n");

	return (0);

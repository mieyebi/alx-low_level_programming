#include <stdio.h>
#include <stdlib.h>

/**
* print_numbers - prints numbers, fizz, buzz, fizz-buzz
* main - checks for code
* Return: return 0 on success
*/
void print_numbers(void)
{
	int a;

	int b;

	int c;

	int d;

	for (a = 1; a <= 100; a++)
	{
		if (b = (a % 3 == 0))
		{
			printf("Fizz");
		}
		if (c = (a % 5 == 0))
		{
			printf("Buzz");
		}
		if (d = (a % 3 ==0) && (a % 5 == 0))
		{
			printf("FizzBuzz");
		}
		printf("%d\n", a);
	}
	printf("\n");
}

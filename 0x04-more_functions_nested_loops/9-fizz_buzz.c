#include <stdio.h>
#include <stdlib.h>

/**
* print_numbers - prints numbers, fizz, buzz, fizz-buzz
* main - checks for code
* Return: return 0 on success
*/
int main(void)
{
	int a;

	a = 1;

	while (a <= 100)
	{
		if (a % 3 == 0)
		{
			printf("Fizz");
		}
		if (a % 5 == 0))
		{
			printf("Buzz");
		}
		if ((a % 3 ==0) && (a % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else
		printf("%d\n", a);

		a++;
	}
	printf("\n");

	return (0);
}

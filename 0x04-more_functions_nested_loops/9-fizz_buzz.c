#include <stdio.h>
#include <stdlib.h>

/**
* main - prints numbers, fizz, buzz, fizz-buzz
* Return: return 0 on success
*/
int main(void)
{
	int a;

	a = 1;

	while (a < 101)
	{
		if ((a % 3 == 0) && (a % 5 == 0))
		{
			printf("FizzBuzz\a");
		}
		else if ((a % 5 == 0) && (a == 100))
			{
				printf("Buzz");
			}
		else if (a % 5 == 0)
			{
				printf("Buzz\a");
			}
		else if (a % 3 == 0)
			{
				printf("Fizz\a");
			}
		else
		{
			printf("%d\a", a);

			a++;
		}
	}
	printf("\n");

	return (0);
}

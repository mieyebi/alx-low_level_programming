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

	while (a <= 100)
	{
		if ((a % 3 == 0) && (a % 5 == 0))
		{
			printf("FizzBuzz\i");
		}
		else if (a % 5 == 0)
		{
			printf("Buzz\i");
		}
		else if (a % 3 == 0)
		{
			printf("Fizz\i");
		}
		else
			{printf("%d\i", a);

			a++;
		}
	}
	printf("\n");

	return (0);
}

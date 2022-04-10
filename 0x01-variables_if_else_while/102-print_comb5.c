#include <stdio.h>
#include <stdlib.h>

/**
* main - prints all possible combination of two digit numbers
* Return: 0 on success
*/

int main(void)
{
	int a, b;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			if (a == '9' && b == '9')
			{
				putchar(a);
				putchar(b);
			}
			else
			{
				putchar(a);
				putchar(b);
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

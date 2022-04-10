#include <stdio.h>
#include <stdlib.h>

/**
* main - prints all possible combination of two digit numbers
* Return: 0 on success
*/

int main(void)
{
	int a, b;

	for (a = '0'; a <= (990 / 10); a++)
	{
		for (b = '0'; b <= (990 / 10); b++)
		{
			if (a >= '0' && a <= '9')
			{
				putchar('0');
				putchar (a);
			}
			if (b >= '0' && b <= '9')
			{
				putchar('0');
				putchar(b);
			}
			putchar(a);
			putchar(' ');
			putchar(b);
			putchar(',');
		}
			/*else
			{
				putchar(a);
				putchar(b);
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');*/
	}
	return (0);
}

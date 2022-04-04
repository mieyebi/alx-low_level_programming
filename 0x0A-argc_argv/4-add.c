#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
* main - function call to add positive integers
*
* @argc: argument count
*
* @argv: argument vector
*
* Return: 0 on success, else 1
*
*/

int main(int argc, char *argv[])
{
	int a, b;

	int sum = 0;


	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}

	for (a = 1; a < argc; a++)
	{
		sum += atoi(argv[a]);


		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (argv[a][b] < '0' || argv[a][b] > '9')
			{
				printf("Error\n");
				return (1);
			}
			/*if (!isdigit(argv[a]))
			{
				printf("Error\n");
				return (1);

			}*/
		}

	}

	printf("%d\n", sum);
	return (0);
}

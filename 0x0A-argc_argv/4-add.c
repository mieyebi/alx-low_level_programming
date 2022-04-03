#include <stdio.h>
#include <stdlib.h>

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
	int a;

	int sum = 0;


	if (argc == 1)
	{
		printf("%d\n", 0);
	}

	for (a = 0; a < argc; a++)
	{
		sum += atoi(argv[a]);

		if (*argv[a] < '1' && (*argv[a] >= 'A' && *argv[a] <= 'z'))
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", sum);
	return (0);
}

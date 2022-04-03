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


	if (argc == 1)
	{
		printf("%d\n", 0);
	}

	for (a = 0; a < argc; a++)
	{
		if (atoi(argv[a]) <= 0 && (atoi(argv[a]) >= 'A' && atoi(argv[a]) <= 'z'))
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			int sum = 0;

			sum += atoi(argv[a]);
			printf("%d\n", sum);
		}
	}
	return (0);
}

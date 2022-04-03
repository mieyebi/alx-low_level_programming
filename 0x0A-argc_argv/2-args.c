#include <stdio.h>

/**
* main - a function call
*
* @argc: argument count
*
* @argv: argument function
*
* Return: 0 on success
*
*/
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	printf("\n");

	return (0);
}

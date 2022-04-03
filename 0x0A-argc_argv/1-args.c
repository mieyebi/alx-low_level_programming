#include <stdio.h>

/**
* main - a function
*
* @argc: argument count
*
* @argv: argument vector
*
* Return: 0 on success
*
*/
int main(int argc, char *argv[] __attribute__((unused)))
{
	int a = 0;

	while (a <= argc)
	{
		a++;
	}
	printf("%d\n", a);

	return (0);
}

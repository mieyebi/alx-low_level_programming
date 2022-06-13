#include "main.h"

/**
 * _strlen - returns the length of string
 * @s: string
 * Return: n on success
 */
int _strlen(char *s)
{
	int n;

	n = 0;
	while (*s != '\0')
	{
		s++;
		n++;
	}
	return (n);
}

#include <stdio.h>
#include "main.h"
#include <string.h>

/**
* *_strncat - concatenates two strings
* @dest: is the destination
* @src: is the source
* @n: is an integer
* Return: return dest on success
*/

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}

#include <stdio.h>
#include "main.h"
#include <string.h>

/**
* *_strncpy - copies a string into another
* @dest: destination
* @src: source
* @n: an integer
* Return: dest on success
*/

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}

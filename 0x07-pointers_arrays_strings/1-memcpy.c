#include "main.h"
#include <stdio.h>

/**
* *_memcpy - copies memory area
*
*@dest: destination of copied memory
*
* @src: memory source
*
* @n: unsigned int type
*
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int c;

	for (c = 0; c < n; c++)
	{
		dest[c] = src[c];
	}
	return (dest);
}

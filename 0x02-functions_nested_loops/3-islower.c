#include <stdio.h>
#include "main.h"
/**
 * printing lower alphabets with _islower
 * @c - int
 * Return: 1 for lowercase alphabets else 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

}

#include <stdio.h>
#include "function_pointers.h"

/**
* int_index - searches for an integer
*
* @size: the number of elements of the array
*
* @array: array of elements
*
* @cmp: function pointer to compare values
*
* Return: 0 or -1 or element index
*
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (size <= 0)
		return (-1);
	if (array == 0 || cmp == 0)
		return (-1);
	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]) != 0)
			return (a);
	}
	if (cmp(array[size]) != 1)
	return (-1);
return (a);
}

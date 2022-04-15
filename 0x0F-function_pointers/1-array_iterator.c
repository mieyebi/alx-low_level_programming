#include <stdio.h>
#include "function_pointers.h"

/**
* array-iterator - executes a function given as a parameter on array elements
*
* @array: array
*
* @size: size of the array
*
* @action: pointer to a function
*
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int a;

	if (size == 0 || action == 0 || array == 0)
		return;

	for (a = 0; a < size; a++)
		action(array[a]);
}

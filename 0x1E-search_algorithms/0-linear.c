#include <stdio.h>
#include "search_algos.h"


/** linear_search - a function that searches using the linear search algorithm
* @array: pointer to the first element
* @size: size of the array
* @value: value to be searched
*/

int linear_search(int *array, size_t size, int value)
{
	size_t a = 0;

	for (a = 0; a < size; a++)
	{
		printf("value checked array[%ld] = [%d]\n", a, array[a]);
		if (array[a] == value)
		{
			return(a);
			break;
		}
	}
	if ((a == (size - 1)) && (array[a] != value))
	{
		return(-1);
	}
	return(0);
}

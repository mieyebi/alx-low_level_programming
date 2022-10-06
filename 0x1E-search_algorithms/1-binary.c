#include "search_algos.h"

/**
* binary_search - A function that searches for a value in a sorted array
* @array: first element of the array
* @size: size of the array
* @value: value to be searched for
* Return: index of the value
*/

int binary_search(int *array, size_t size, int value)
{
	size_t i = 0;
	ssize_t mid = size / 2;
	size_t low = 0;
	size_t high = size - 1;

	if (array == NULL)
		return (-1);
	while (1)
	{
		printf("Searching in array: %d", array[low]);
		for (i = low + 1; i <= high; i++)
		{
			printf(", %d", array[i]);
		}
		printf("\n");
		mid = low + (high - low) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
		{
			low = mid + 1;
			high = high;

		}
		else
		{
			high = mid - 1;
			low = low;
		}
		if (low > high)
			break;
	}
	return (-1);
}

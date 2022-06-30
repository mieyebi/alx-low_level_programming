#include "hash_tables.h"

/**
* *hash_table_create - a function that creates a hash table
* @size: the size of the array
* Return: NULL or pointerto the new table
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int a = 0;
	hash_table_t *arr = malloc(sizeof(hash_table_t));

	arr->array = malloc(sizeof(hash_node_t) * size);

	if (arr == NULL)
		return (NULL);

	if (arr->array == NULL)
	{
		free(arr);
		return (NULL);
	}

	for (a = 0; a < size; a++)
	{
		arr->array[a] = NULL;
	}
	arr->size = size;
	return (arr);
}

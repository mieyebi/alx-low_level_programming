#include "hash_tables.h"

/**
*key_index - a function that gives you the index of a key
* @key: hash key
* @size: size of the table
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (!key)
		return (0);
	return (hash_djb2(key) % size);
}


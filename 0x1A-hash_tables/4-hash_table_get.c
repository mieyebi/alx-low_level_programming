#include "hash_tables.h"

/**
* hash_table_get - a function that retrieves a value associated with a key
* @ht: the hash table
* @key: key that enables for retrieval
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *hash;
	unsigned int i;
	char *htg;

	if (ht == NULL)
		return (0);
	htg = strdup(key);
	i = key_index((unsigned char *)key, ht->size);
	hash = ht->array[i];

	while (hash)
	{
		if (strcmp(hash->key, htg) == 0)
			break;
		hash = hash->next;
	}


	if (hash == NULL)
		return (0);

	return (hash->value);
}

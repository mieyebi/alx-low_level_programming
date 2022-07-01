#include "hash_tables.h"

/**
* hash_table_delete - a function that deletes a hash table
* #ht: hash table
*/

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *hash;
	unsigned int i = 0;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i])
		{
			hash = ht->array[i]->next;
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);
			ht->array[i] = hash;
		}
		free(ht->array[i]);
	}
	free(ht->array);
	free(ht);
}

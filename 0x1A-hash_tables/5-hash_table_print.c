#include "hash_tables.h"

/**
* hash_table_print - a function that prints a hash table
* @ht: hash table
*/

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *hash;
	char *htg;

	if (ht == NULL)
		return;

	printf("{");
	htg = "";

	for (i = 0; i < ht->size; i++)
	{
		hash = ht->array[i];

		while (hash)
		{
			printf("%s'%s': '%s'", htg, hash->key, hash->value);
			htg = ", ";
			hash = hash->next;
		}
	}
	printf("}\n");
}

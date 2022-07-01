#include "hash_tables.h"

/**
* hash_table_set - a function that adds an element to the hash table
* @ht: the hash table to add the key value to
* @key: a non empty key
* @value: value associated with the key
* Return: 1 or 0
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int i;
	hash_node_t *hash, *node = NULL;
	node = malloc(sizeof(hash_node_t));

	if (node == NULL || ht == NULL)
		return (0);
	if (strcmp(key, "") == 0 || key == NULL)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);
	i = key_index((unsigned char *)key, ht->size);

	if (ht->array[i] != NULL)
	{
		hash = ht->array[i];
		while (hash != NULL)
		{
			if(strcmp(hash->key, node->key) == 0)
				break;
			hash = hash->next;
		}
		if (hash == NULL)
		{
			node->next = ht->array[i];
			ht->array[i] = node;
		}
		else
		{
			free(hash->value);
			hash->value = strdup(node->value);
			free(node->value);
			free(node->key);
			free(node);
		}
	}
	else
	{
		node->next = NULL;
		ht->array[i] = node;
	}
	return (1);
}

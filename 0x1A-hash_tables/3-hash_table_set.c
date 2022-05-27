#include "hash_tables.h"

/**
 *hash_table_set - Write a function that adds an element to the hash table.
 *@ht: hash table you want to add or update the key/value to
 *@key:is the key.
 *@value:value is the value associated with the key. value must be duplicated.
 *Return:Returns: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	unsigned long int size = 0;
	hash_node_t *adds = NULL;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	size = ht->size;
	index = key_index((unsigned char *)key, size);
	if (ht->array[index] && strcmp(key, ht->array[index]->key) == 0)
	{
		ht->array[index]->value = strdup(value);
		return (1);
	}
	adds = malloc(sizeof(hash_node_t));
	if (!adds)
		return (0);
	adds->key = strdup(key);
	adds->value = strdup(value);
	adds->next = ht->array[index];
	ht->array[index] = adds;
	return (1);
}

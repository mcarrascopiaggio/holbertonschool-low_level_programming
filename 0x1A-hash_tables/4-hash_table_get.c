#include "hash_tables.h"

/**
 *hash_table_get - Write a function that retrieves a value assoc with a key.
 *@ht:  the hash table you want to look into
 *@key:  key you are looking for
 *Return:the value associated with the element, or NULL if key couldn’t
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	unsigned long int size = 0;
	char *string = NULL;

	if (ht == NULL || key == NULL)
		return (NULL);
	size = ht->size;
	index = key_index((unsigned char *)key, size);
	while (ht->array[index])
	{
		if (strcmp(key, ht->array[index]->key) != 0)
			return (NULL);
		string = ht->array[index]->value;
		ht->array[index] = ht->array[index]->next;
	}
	return (string);
}

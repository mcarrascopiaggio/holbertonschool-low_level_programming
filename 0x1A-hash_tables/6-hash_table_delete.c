#include "hash_tables.h"

/**
 *hash_table_delete - function that deletes a hash table.
 *@ht: is the hash table
 *Return: nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp;
	hash_node_t *aux;
	unsigned long int index = 0;

	if (ht == NULL)
		return;

	while (index < ht->size)
	{
		temp = ht->array[index];
		while (temp)
		{
			aux = temp;
			free(temp->key);
			free(temp->value);
			temp = temp->next;
			free(aux);
		}
		index++;
	}
	free(ht->array);
	free(ht);
}

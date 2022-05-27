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
	unsigned long int i = 0;

	if (ht == NULL)
		return;

	while (i < ht->size)
	{
		if (ht->array[i] != NULL)
		{
			temp = ht->array[i];
			while (temp)
			{
				aux = temp;
				temp = temp->next;
				free(temp->key);
				free(temp->value);
				free(aux);
			}
		}
		i++;
	}
	free(ht->array);
	free(ht);
}

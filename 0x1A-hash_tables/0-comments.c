#include "hash_tables.h"

/**
 *hash_table_create - function that creates a hash table.
 *@size:  size of the array
 *Return:pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_ht; /**declare a new hash table*/
	unsigned long i; /** var for control de finall for*/

	if (size == 0)
		return (NULL);
	new_ht = malloc(sizeof(hash_table_t)); /**assign memory to the hash table*/
	if (new_ht == NULL)
		return (NULL);
	new_ht->size = size; /**assign data to the hash table*/
	new_ht->array = malloc(sizeof(hash_node_t *) * size); /**assigna data to the hash tabl*/
	if (!new_ht->array)
	{
		free(new_ht);
		return (NULL);
	}
	for (i = 0; i < size; i++) /**initializaded all nodes*/
	{
		new_ht->array[i] = NULL;
	}
	return (new_ht);
}

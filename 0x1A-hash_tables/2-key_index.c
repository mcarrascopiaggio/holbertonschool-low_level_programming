#include "hash_tables.h"

/**
 *key_index - Write a function that gives you the index of a key.
 *@key:  is the key
 *@size: size
 *Return: key_index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0;

	index = (hash_djb2(key) % size);
	return (index);
}

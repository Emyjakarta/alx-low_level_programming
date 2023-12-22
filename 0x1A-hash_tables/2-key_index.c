#include "hash_tables.h"
/**
 * key_index-gives the index of a key in a hash table array
 * @key: the key (string)
 * @size: size of hash table array
 * Return: index at which the key-value pair
 * should be stored in the array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value, idx;

	hash_value = hash_djb2(key);
	idx = hash_value % size;
	return (idx);
}

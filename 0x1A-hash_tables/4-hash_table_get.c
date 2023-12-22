#include "hash_tables.h"
/**
 * hash_table_get-retrieves a value associated with a
 * key in a hash table
 * @ht: hash table to look into
 * @key: key to search for
 * Return: value associated with the element or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *node;

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (NULL);
	}
	idx = key_index((const unsigned char *)key, ht->size);
	node = ht->array[idx]; /*find the starting node at index*/
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0) /*check if key matches*/
		{
			return (node->value); /*return value associated with key*/
		}
		node = node->next; /*move to next node in case of collision*/
	}
	return (NULL); /*unable to find key*/
}

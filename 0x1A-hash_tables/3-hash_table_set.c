#include "hash_tables.h"
/**
 * hash_table_set-adds an element to the hash table
 * @ht: hash table to add the key-value pair
 * @key: the key(string)
 * @value: the value associated with the key
 * Return: 1 on success or 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new = NULL, *tmp = NULL;
	unsigned long int idx;

	if (ht == NULL || key == NULL || *key == '\0') /* check validity of inputs */
		return (0);
	/* get index using key */
	idx = key_index((const unsigned char *)key, ht->size);
	/* check if key already exists, update value if so*/
	tmp = ht->array[idx];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value); /* free the old value */
			tmp->value = strdup(value); /*duplicate the new value*/
			if (tmp->value == NULL)
				return (0);
			return (1);
		}
		tmp = tmp->next;
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = strdup(key); /*duplicate the key*/
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = strdup(value); /*duplicate the value*/
	if (new->value == NULL)
	{
		free(new->key);
		free(new);
		return (0);
	} /*Add new node at the beginning in case of collision*/
	new->next = ht->array[idx];
	ht->array[idx] = new;
	return (1);
}

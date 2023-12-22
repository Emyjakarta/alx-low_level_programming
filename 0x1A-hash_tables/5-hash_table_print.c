#include "hash_tables.h"
/**
 * hash_table_print-prints a hash table
 * @ht: hash table
 * Description: prints the key-value pairs in the hash table
 * in the order that they appear in the hash table array.
 * if ht is NULL, don't print anything
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int fl = 0;
	hash_node_t *node;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (fl == 1)
			{
				printf(", ");
			}
			printf("'%s': '%s'", node->key, node->value);
			fl = 1;
			node = node->next;
		}
	}
	printf("}\n");
}

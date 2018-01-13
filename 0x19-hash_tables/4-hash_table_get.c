#include "hash_tables.h"

/**
 * hash_table_get - retrieve value from hash table
 * @ht: pointer to hash table
 * @key: hash table key
 * Return: value of the key, or NULL if key can't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *node;

	if (ht == NULL)
		return (NULL);

	i = key_index((unsigned char *)key, ht->size);
	node = ht->array[i];
	while (node)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}

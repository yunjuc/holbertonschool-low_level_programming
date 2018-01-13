#include "hash_tables.h"

/**
 * hash_table_print - print a hash table
 * @ht: pointer to hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i = 0;

	if (ht)
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			node = ht->array[i];
			if (node)
			{
				while (node)
				{
					printf("'%s': '%s'", node->key, node->value);
					node = node->next;
				}
				if (node)
					printf(", ");
			}
		}
		printf("}\n");
	}
}

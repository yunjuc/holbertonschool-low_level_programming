#include "hash_tables.h"

/**
 * hash_table_print - print a hash table
 * @ht: pointer to hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i = 0;
	int flag = 0;

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
					if (flag == 1)
						printf(", ");
					printf("'%s': '%s'", node->key, node->value);
					node = node->next;
					flag = 1;
				}
			}
		}
		printf("}\n");
	}
}

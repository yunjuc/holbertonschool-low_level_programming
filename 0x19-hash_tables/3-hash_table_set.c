#include "hash_tables.h"

/**
 * hash_table_set - add new element to a hash table
 * @ht: pointer to hash table
 * @key: key of new element
 * @value: value of new element
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i;
	hash_table_t *hash = ht;
	hash_node_t *node;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	i = key_index((unsigned char *)key, hash->size);
	node = ht->array[i];
	if (node == NULL)
		node = add_node(&node, key, value);
	else
	{
		while (node != NULL)
		{
			if (strcmp(node->key, key) == 0)
			{
				free(node->value);
				node->value = strdup(value);
				return (1);
			}
			node = node->next;
		}
		node = add_node(&ht->array[i], key, value);
	}
	if (node == NULL)
		return (0);
	ht->array[i] = node;
	return (1);
}

/**
 * add_node - add node to the beginning of the list
 * @head: pointer to list head
 * @key: key to be copied
 * @value: value to be copied
 * Return: pointer to new node
 */
hash_node_t *add_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *new;

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (NULL);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = *head;
	*head = new;

	return (new);
}

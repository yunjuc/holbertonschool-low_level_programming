#include "hash_tables.h"

/**
 * key_index - get hash index based on the key
 * @key: the key
 * @size: size of hash table array
 * Return: hash index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;
	return (index);
}

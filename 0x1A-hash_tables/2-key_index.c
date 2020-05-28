#include "hash_tables.h"

/**
 * key_index - gets the key index from a str
 *
 * @key: str
 * @size: table size
 *
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

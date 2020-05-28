#include "hash_tables.h"

/**
 * hash_table_create - creates a new hash table with a given size
 *
 * @size: length
 *
 * Return: my_table or null if allocation fails
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *my_table = NULL;

	if (size > 0)
	{
		my_table = malloc(sizeof(hash_table_t));
		if (!my_table)
			return (NULL);
		my_table->size = size;
		my_table->array = malloc(sizeof(hash_node_t *) * size);
		if (!my_table->array)
		{
			free(my_table);
			return (NULL);
		}
		return (my_table);
	}
	return (NULL);
}

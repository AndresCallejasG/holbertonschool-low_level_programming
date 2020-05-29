#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 *
 * @ht: hash table
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current = NULL, *aux = NULL;
	unsigned int i = 0;

	if (!ht)
		return;
	if (!ht->array)
	{
		free(ht);
		return;
	}
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current)
		{
			aux = current;
			current = current->next;
			free(aux->key);
			free(aux->value);
			free(aux);
		}

	}
	free(ht->array);
	free(ht);
}

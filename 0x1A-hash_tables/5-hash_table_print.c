#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 *
 * @ht:has table
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current;
	unsigned int i;
	int first;

	if (ht)
	{
		first = 1;
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			current = ht->array[i];
			while (current)
			{
				if (!first)
					printf(", ");
				printf("'%s': '%s'", current->key, current->value);
				first = 0;
				current = current->next;
			}
		}
		printf("}");
		printf("\n");
	}
}

#include "hash_tables.h"

/**
 * hash_table_set -
 *
 * Return: 
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int idx;
    hash_node_t *new_node, *current;


    if(!ht || !(ht->size))
        return(0);

    if(strcmp(key, "") == 0)
        return(0);

    idx = key_index((const unsigned char *) key, ht->size);   

    if (!(ht->array[idx]))
    {        
        new_node = malloc(sizeof(hash_node_t));
        new_node->key = strdup(key);
        new_node->value = strdup(value);
        ht->array[idx] = new_node;        
    }
    else
    {
        current = ht->array[idx];
        while(current)
        {
            if(strcmp(current->key, key) == 0)
            {
                free(current->value);
                current->value = strdup(value);
                return(1);
            }
            current = current->next;
        }
        current = ht->array[idx];
        new_node = malloc(sizeof(hash_node_t));
        new_node->key = strdup(key);
        new_node->value = strdup(value);
        new_node->next = current;
        ht->array[idx] = new_node; 
    }

    return(1);
}

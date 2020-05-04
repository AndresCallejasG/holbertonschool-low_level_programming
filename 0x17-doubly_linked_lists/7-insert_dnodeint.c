#include "lists.h"

/**
 * insert_dnodeint_at_index -
 *
 * @h: dlistint_t head
 * @idx: index
 * @n: number for the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current;
	unsigned int count = 0;

	new_node = malloc(sizeof(dlistint_t *));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (!(*h) && idx == 0)
	{
		*h = new_node;
		return (new_node);
	}
	else if (*h)
	{
		current = *h;
		while (current->next)
		{
			if (count == idx)
			{
				new_node->prev = malloc(sizeof(dlistint_t *));
				if (new_node->prev == NULL)
				{
					free(new_node);
					return (NULL);
				}
				new_node->next = malloc(sizeof(dlistint_t *));
				if (new_node->next == NULL)
				{
					free(new_node->prev), free(new_node);
					return (NULL);
				}
				new_node->next = current, new_node->prev = current->prev;
				current->prev = new_node, new_node->prev->next = new_node;
				return (new_node);
			}
			current = current->next;
			count++;
		}
	}
	return (NULL);
}

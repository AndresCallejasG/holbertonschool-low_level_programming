#include "lists.h"

/**
 * insert_dnodeint_at_index -  inserts a new node at a given position.
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

	if (h)
	{

		if (idx == 0)
		{
			return (add_dnodeint(h, n));
		}
		else if (*h)
		{
			current = *h;
			while (current)
			{
				if (count == idx)
				{

					new_node = malloc(sizeof(dlistint_t *));
					new_node->n = n;
					new_node->next = current, new_node->prev = current->prev;
					current->prev = new_node, new_node->prev->next = new_node;
					return (new_node);
				}
				else if (current->next == NULL && (count + 1) == idx)
					return (add_dnodeint_end(h, n));
				current = current->next;
				count++;
			}
		}
	}
	return (NULL);
}

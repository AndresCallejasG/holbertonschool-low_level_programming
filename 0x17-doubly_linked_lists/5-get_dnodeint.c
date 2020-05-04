#include "lists.h"

/**
 * get_dnodeint_at_index -function that free a dlistint_t list.
 *
 * @head: dlinkedList head
 * @index: node index required
 *
 * Return: nth node
 * if the node does not exist, return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int count = 0;

	if (head)
	{
		current = head;
		while (current)
		{
			if (count == index)
			{
				return (current);
			}
			current = current->next;
			count++;
		}
	}
	return (NULL);
}

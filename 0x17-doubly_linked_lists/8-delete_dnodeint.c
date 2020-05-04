#include "lists.h"

/**
 * delete_dnodeint_at_index -  deletes the node at
 * index of a dlistint_t linked list.
 *
 * @head: dlistint_t head
 * @index: index
 *
 * Return:  1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	dlistint_t *n_prev = 0, *n_next = 0;
	unsigned int count = 0;

	if (current)
	{
		if (index == 0)
		{
			if (current->next)
			{
				n_next = current->next;
				n_next->prev = NULL;
			}
			*head = n_next;
			free(current);
			return (1);
		}
	}
	while (current)
	{
		if (count == index)
		{
			n_prev = current->prev;
			if (current->next)
			{
				n_next = current->next;
				n_next->prev = n_prev;
				n_prev->next = n_next;
			}
			else
				n_prev->next = NULL;
			free(current);
			return (1);
		}
		current = current->next;
		count++;
	}
	return (-1);
}

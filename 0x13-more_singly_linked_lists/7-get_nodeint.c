#include <stdio.h>
#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t
 *
 * @head: List
 * @index: nth node to return
 *
 * Return: the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current;

	if (head)
	{
		current = head;

		for (i = 0; i < index; i++)
		{
			current = current->next;
			if (current == NULL)
				break;
		}
		if (i == index)
			return (current);
		else
			return (NULL);
	}

	return (NULL);
}

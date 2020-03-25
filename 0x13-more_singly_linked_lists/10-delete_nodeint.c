#include <stdio.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index @index of a listint_t
 *
 * @head: List
 * @index: index where the new node should be added
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current, *del;

	if (head && *head)
	{
		current = *head;
		if (index == 0)
		{
			*head = (*head)->next;
			free(current);
			return (1);
		}

		for (i = 0; i < index - 1; i++)
		{
			current = current->next;
			if (current == NULL)
				return (-1);
		}
		del = current->next;
		if (del == NULL)
			return (-1);
		current->next = del->next;
		free(del);
		return (1);
	}
	return (-1);
}

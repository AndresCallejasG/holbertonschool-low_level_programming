#include <stdio.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 *
 * @head: List
 * @idx: index where the new node should be added
 * @n: int for new node;
 *
 * Return: adress of new node or NULL if fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *current, *new_node;

	if (head)
	{
		current = *head;
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
			return (NULL);

		new_node->n = n;

		if (idx == 0)
		{
			new_node->next = *head;
			*head = new_node;
			return (new_node);
		}

		for (i = 0; i < idx - 1; i++)
		{
			current = current->next;
			if (current == NULL)
			{
				free(new_node);
				return (NULL);
			}
		}
		new_node->next = current->next;
		current->next = new_node;
		return (new_node);
	}
	return (NULL);
}

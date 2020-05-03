#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 *
 * @head: dlistint_t head
 * @n: number for the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *current;

	new_node = malloc(sizeof(dlistint_t *));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (*head)
	{
		current = *head;
		new_node->prev = malloc(sizeof(dlistint_t *));
		if (new_node->prev == NULL)
		{
			free(new_node);
			return (NULL);
		}
		while (current->next)
		{
			current = current->next;
		}

		new_node->prev = current;
		current->next = new_node;
	}
	else
	{
		*head = new_node;
	}
	return (new_node);
}

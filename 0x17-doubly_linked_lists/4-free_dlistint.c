#include "lists.h"

/**
 * free_dlistint - function that free a dlistint_t list.
 *
 * @head: dlist head
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current, *aux;

	if (head)
	{
		current = head->next;
		while (current)
		{
			aux = current->next;
			free(current);
			current = aux;
		}
		free(head);
	}
}

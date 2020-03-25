#include <stdio.h>
#include "lists.h"
/**
 * reverse_listint - reverses a listint_t linked list.
 *
 * @head: List
 *
 * Return: new head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current, *prev, *nxt;

	if (head)
	{
		current = *head;
		prev = NULL;

		while (current)
		{
			nxt = current->next;
			current->next = prev;
			prev = current;
			current = nxt;
		}
		*head = prev;
	}
	return (*head);
}

#include <stdio.h>
#include "lists.h"
/**
 * free_listint2 - frees a listint_t list
 *
 * @head: List
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *h;

	if (*head)
	{
		h = *head;
		while (h)
		{
			current = h;
			h = h->next;
			free(current);
		}
		*head = NULL;
	}
}

#include <stdio.h>
#include "lists.h"
/**
 * free_listint - frees a listint_t list.
 *
 * @head: List
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	if (head)
	{
		while (head->next)
		{
			current = head;
			head = head->next;
			free(current);
		}
		free(head);
	}
}

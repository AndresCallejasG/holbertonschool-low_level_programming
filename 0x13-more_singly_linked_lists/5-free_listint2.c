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
	listint_t *current;

	if (*head)
	{
		while (*head)
		{
			current = *head;
			*head = (*head)->next;
			free(current);
		}
	}
}

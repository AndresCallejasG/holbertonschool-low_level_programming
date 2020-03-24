#include <string.h>
#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 *
 * @head: head
 *
 * Return: head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *current = *head;

	n = 0;
	if (*head)
	{
		n = (*head)->n;
		*head = (*head)->next;
		free(current);
	}

	return (n);
}


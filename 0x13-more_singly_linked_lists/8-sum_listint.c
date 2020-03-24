#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - sum all the elements of a listint_t list.
 *
 * @head: List
 *
 * Return: sum of elements' n
 */
int sum_listint(listint_t *head)
{
	int i = 0;
	const listint_t *current;

	if (head)
	{
		current = head;

		while (current)
		{
			i += current->n;
			current = current->next;
		}
	}
	return (i);
}

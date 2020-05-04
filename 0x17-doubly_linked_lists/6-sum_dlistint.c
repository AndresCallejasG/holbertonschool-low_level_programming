#include "lists.h"

/**
 * sum_dlistint -  returns the sum of all the
 * data (n) of a dlistint_t linked list.
 *
 * @head: dlistint head
 *
 * Return: add
 * if the list is empty, return 0
 */
int sum_dlistint(dlistint_t *head)
{
	int add = 0;

	while (head)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}

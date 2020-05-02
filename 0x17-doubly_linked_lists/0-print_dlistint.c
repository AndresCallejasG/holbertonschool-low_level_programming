#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 *
 * @h: head of double linked list
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t length = 0;

	if (h)
	{
		current = h;
		do {
			length++;
			printf("%d\n", current->n);
			current = current->next;

		} while (current);
	}
	return (length);
}

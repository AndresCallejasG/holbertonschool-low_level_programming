#include "lists.h"

/**
 * dlistint_len - number of elements in a linked dlistint_t list.
 *
 * @h: head of double linked list
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t length = 0;

	if (h)
	{
		current = h;
		do {
			length++;
			current = current->next;

		} while (current);
	}
	return (length);
}

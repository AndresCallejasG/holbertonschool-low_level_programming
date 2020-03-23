#include <stdio.h>
#include "lists.h"
/**
 * listint_len - returns number of elements in a linked listint_t list.
 *
 * @h: List
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;
	const listint_t *current;

	if (h)
	{
		current = h;

		while (current)
		{
			current = current->next;
			i++;
		}
	}
	return (i);
}

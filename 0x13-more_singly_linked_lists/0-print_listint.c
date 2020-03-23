#include <stdio.h>
#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list.
 *
 * @h: List
 *
 * Return: number of elements
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;
	const listint_t *current;

	if (h)
	{
		current = h;

		while (current)
		{
			printf("%i\n", current->n);
			current = current->next;
			i++;
		}
	}
	return (i);
}

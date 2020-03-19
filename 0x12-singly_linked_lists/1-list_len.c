#include "lists.h"
/**
 * list_len -  number of elements in a linked list_t list.
 *
 * @h: List
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	int i = 0;
	const list_t *current;

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

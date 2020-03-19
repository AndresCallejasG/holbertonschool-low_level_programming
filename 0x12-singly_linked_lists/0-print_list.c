#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list.
 *
 * @h: List
 *
 * Return: number of elements
 */
size_t print_list(const list_t *h)
{
	int i = 0;
	const list_t *current;

	if (h)
	{
		current = h;

		while (current)
		{
			if (current->str == 0)
				printf("[%d] %s\n", 0, "(nil)");
			else
				printf("[%d] %s\n", current->len, current->str);
			current = current->next;
			i++;
		}
	}
	return (i);
}

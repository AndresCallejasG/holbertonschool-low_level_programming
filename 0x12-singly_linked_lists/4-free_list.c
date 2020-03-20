#include <stdio.h>
#include "lists.h"
/**
 * free_list - prints all the elements of a list_t list.
 *
 * @head: List
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *current;

	if (head)
	{
		while (head)
		{
			current = head;
			head = head->next;
			free(current->str);
			free(current);
		}
	}
}

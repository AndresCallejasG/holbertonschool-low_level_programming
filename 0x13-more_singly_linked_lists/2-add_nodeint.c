#include <string.h>
#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 *
 * @head: head
 * @n: int for new node
 * Return: list with new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (*head)
	{
		new_node->next = *head;
	}
	else
	{
			new_node->next = NULL;
	}
	*head = new_node;
	return (*head);
}


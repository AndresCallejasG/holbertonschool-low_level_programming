#include <string.h>
#include "lists.h"

/**
* _strlen - returns the length of a string
* @s: string
*
* Return: length of s
*/

int _strlen(char *s)
{

	int size;

	size = 0;

	while (s[size] != '\0')
	{
		size++;
	}

	return (size);
}
/**
 * add_node_end -  adds a new node at the end of a list_t list.
 *
 * @head: head
 * @str: string
 * Return: list with new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	char *s;
	list_t *current = *head;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	s = strdup(str);
	if (s == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = s;
	new_node->len = _strlen(s);
	new_node->next = NULL;
	if (*head)
	{
		while (current->next)
		{
			current = current->next;
		}
		current->next = new_node;
	}
	else
	{
		*head = new_node;
	}
	return (*head);
}


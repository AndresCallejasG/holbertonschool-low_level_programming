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
 * add_node -  list_t *add_node(list_t **head, const char *str);
 *
 * @head: head
 * @str: string
 * Return: list with new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *s;

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


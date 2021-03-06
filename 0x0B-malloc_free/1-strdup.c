#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - newly allocated space in memory,
 * which contains a copy of the string given
 *
 * @str: string to copy
 *
 * Return: array
 */
char *_strdup(char *str)
{
	char *copy;
	int i, len;

	i = 0;
	len = 0;

	if (str == 0)
		return ('\0');

	while (str[i] != '\0')
		i++;
	len = i;
	copy = malloc(len * sizeof(char) + 1);

	if (copy == 0)
		return ('\0');

	for (i = 0; str[i] != '\0'; i++)
	{
		copy[i] = str[i];
	}
	copy[i] = '\0';
	return (copy);
}

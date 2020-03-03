#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - concatenate two strings
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: array concatenated
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, j, len1, len2;

	i = 0;
	j = 0;
	len1 = len(s1);
	len2 = len(s2);

	concat = malloc((len1 + len2) * sizeof(char) + 1);

	if (concat == 0)
		return ('\0');

	for (i = 0; i < len1; i++)
	{
		concat[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		concat[i + j] = s2[j];
	}
	concat[i + j] = '\0';
	return (concat);
}
/**
 * len - calculate the lenght of a string
 *
 * @str: string
 *
 * Return: lenght
 */

int len(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;

	return (i);
}

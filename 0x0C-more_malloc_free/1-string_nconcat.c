#include "holberton.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenate two strings
 *
 * @s1: string 1
 * @s2: string 2
 * @n: n bytes from s2 to copy
 *
 * Return: array concatenated
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int i, j, len1, len2;

	i = 0;
	j = 0;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";

	len1 = len(s1);
	len2 = len(s2);

	if (n < len2)
		concat = malloc((len1 + n) * sizeof(char) + 1);
	else
		concat = malloc((len1 + len2) * sizeof(char) + 1);

	if (concat == 0)
		return ('\0');

	for (i = 0; i < len1; i++)
	{
		concat[i] = s1[i];
	}
	for (j = 0; j < len2 && j < n; j++)
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

unsigned int len(char *str)
{
	unsigned int i = 0;

	while (str[i] != '\0')
		i++;

	return (i);
}

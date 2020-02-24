#include "holberton.h"

/**
 * _strchr - locates a character in a string
 *
 * @s: string to be scanned.
 * @c: character to match.
 *
 * Return: pointer to the first occurrence
 * if not found, NULL
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			s = &s[i];
			return (s);
		}
		i++;
	}

	return ('\0');
}

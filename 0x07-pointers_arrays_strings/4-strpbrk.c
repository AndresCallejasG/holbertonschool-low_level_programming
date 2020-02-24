#include "holberton.h"

/**
 * _strpbrk - ocates the first occurrence in s of any
 * of the bytes in accept
 *
 * @s: string to be scanned.
 * @accept: string containing the character to match.
 *
 * Return: length
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	i = 0;
	j = 0;

	while (s[i] != '\0')
	{
		j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				return (s + i);
			j++;
		}
		i++;
	}
	return ('\0');
}

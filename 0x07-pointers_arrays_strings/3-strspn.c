#include "holberton.h"

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: string to be scanned.
 * @accept: string containing the characters to match.
 *
 * Return: length
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, len;

	i = 0;
	j = 0;
	len = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				len++;
			j++;
		}
		i++;
	}
	return (len);
}

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
	unsigned int i, j;
	int flag;

	i = 0;
	j = 0;
	flag = 1;

	while (s[i] != '\0' && flag)
	{
		j = 0;
		flag = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				flag = 1;
			j++;
		}
		i++;
	}
	i--;
	return (i);
}

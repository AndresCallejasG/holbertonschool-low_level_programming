#include "holberton.h"

/**
 * leet - encodes a string into 1337.
 *
 * @s: string
 *
 * Return: string in leet
 */

char *leet(char *s)
{
	int i, j;
	char leet[] = {'O', 'L', '\0', 'E', 'A', '\0', '\0', 'T', '\0'};

	i = 0;
	j = 0;

	while (s[i] != '\n')
	{
		while (j < 8)
		{
			if (((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) &&
			 (s[i] == leet[j] || s[i] == leet[j] + 32) && (s[i] != '\0'))
			{
				s[i] = j + '0';
			}
			j++;
		}
		i++;
		j = 0;
	}

	return (s);
}

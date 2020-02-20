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
	char aux[] = {'\0', '\0'};

	i = 0;
	j = 0;

	while (s[i] != '\n')
	{
		while (j < 8)
		{
			aux[0] = s[i];
			string_toupper(aux);
			if ((aux[0] == leet[j]) && (s[i] != '\0'))
				s[i] = j + '0';
			j++;
		}
		i++;
		j = 0;
	}

	return (s);
}

#include "holberton.h"

/**
 * rot13 - encodes a string using rot13.
 *
 * @s: string
 *
 * Return: string in rot13
 */

char *rot13(char *s)
{
	int i;
	int aux;

	i = 0;
	aux = 0;

	while (s[i] != '\0')
	{

		while ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
		{
			aux = s[i] + 13;

			if ((aux > 'Z' && s[i] <= 'Z') || aux > 'z')
			{
				aux = aux % (90 + (32 * (s[i] / 97)));
				aux = aux + (65 + (32 * (s[i] / 97))) - 1;
			}

			s[i] = aux;
			i++;
		}
		i++;
	}
	return (s);
}

#include "holberton.h"

/**
 * _strcmp - compares two strings.
 * @s1: string 1
 * @s2: string 2
 *
 * Return: 0 if is exactly the same.
 */

int _strcmp(char *s1, char *s2)
{
	int i, dif;

	i = 0;
	dif = 0;

	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			dif = s1[i] - s2[i];
			return (dif);
		}
		i++;
	}
	
	return (0);
}

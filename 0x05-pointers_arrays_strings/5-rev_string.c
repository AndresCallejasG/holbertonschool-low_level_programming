#include "holberton.h"

/**
* rev_string - reverses a string.
* @s: string
*
* Return: void
*/

void rev_string(char *s)
{
	int i, j, k;
	char str[1024];

	i = 0;
	j = 0;
	k = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		str[k] = s[j];
		k++;

	}
	for (j = 0; j < i; j++)
	{
		s[j] = str[j];
	}
}

#include "holberton.h"

/**
 * _strcat - checktes two strings..
 * @dest: destination
 * @src: Source
 *
 * Return: first string (destination)
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}

	dest[i + j] = '\0';

	return (dest);
}

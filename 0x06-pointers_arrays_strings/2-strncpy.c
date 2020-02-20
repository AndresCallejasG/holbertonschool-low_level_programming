#include "holberton.h"

/**
 *_strncpy - function that copies a string exactly like strncpy
 *
 * @dest: destination
 * @src: Source
 * @n: number of characters to be copied
 *
 * Return: first string (destination)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	while (j < n && (src[j + 1] != '\0'))
	{
		dest[j] = '\0';
		j++;
	}
	dest[j] = '\0';

	return (dest);
}

#include "holberton.h"

/**
* _strcpy - copies the string pointed to by src,
* including the terminating null byte (\0),
* to the buffer pointed to by dest
* @src: source
* @dest: destination
*
* Return: the pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	int i, size;

	i = 0;
	size = 0;

	while (src[i] != '\0')
	{
		i++;
	}
	size = i;

	for (i = 0; i <= size; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}

#include "holberton.h"

/**
 * _strstr - gets the length of a prefix substring
 *
 * @haystack: string to be scanned.
 * @needle: substring to find..
 *
 * Return: pointer to the beginning of the located substring
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j, k;
	int flag;

	i = 0;
	j = 0;
	k = 0;
	flag = 0;

	while (haystack[i] != '\0')
	{
		k = i;
		j = 0;
		while (haystack[k] == needle[j])
		{
			k++;
			j++;

			if (needle[j] == '\0')
			{
				flag = 1;
				break;
			}
		}
		if (flag)
			return (haystack + i);
		i++;
	}

	return ('\0');
}

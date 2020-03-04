#include <stdlib.h>

/**
 * strtow - splits a string into words.
 *
 * @str: string
 *
 * Return: array with words.
 * if error null
 */

char **strtow(char *str)
{
	int i, j, k; 
	int spaces, w_size;
	char **words;

	i = 0;
	j = 0;
	k = 0;
	w_size = 0;
	spaces = 0;

	if (str == 0 || str[0] == 0)
		return (0);

	for (i = 0; i != '\0'; i++)
	{
		while (str[i + 1] == ' ')
			i++;
		if (str[i] == ' ')
			spaces++;
	}
	words = malloc( sizeof(char *) * spaces + 2);
	if ( words == 0)
		return (0);
	j = 0;
	for (i = 0; str[i] != '\0' && j < spaces; i++)
	{
		if (str[i] != ' ')
		{
			w_size = 0;
			while (str[i + w_size] != ' ')
			{
				w_size++;	
				if (str[i + w_size] =='\0')
					break;
			}
			words[j] = malloc(sizeof(char) * w_size + 1);
			if (words[j] == 0)
			{
				for (k = 0; k < j; k++)
					free(words[k]);
				free(words);
				return (0);
			}
	
			for (k = 0; k < w_size; k++)
			{
				words[j][k] = str[i];
			}
			words[j][k] = '\0';
			j++;
		}
	}
	words[i] = 0;
	return (words);
}

#include "holberton.h"
#include <stdlib.h>

/**
 * argstostr - concatenate all the args
 *
 * @ac: arcg
 * @av: argv[]
 *
 * Return: args concat.
 * NULL if error.
 */

char *argstostr(int ac, char **av)
{
	char *concat;
	int i, j, size_i;

	i = 0;
	j = 0;
	size_i = 0;

	if (ac == 0 || av == 0)
		return (0);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			size_i++;
		}
	}
	concat = malloc((size_i + ac + 1) * sizeof(char *));
	if (concat == 0)
		return (0);
	size_i = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			concat[size_i] = av[i][j];
			size_i++;
		}
		concat[size_i] = '\n';
		size_i++;
	}
	concat[size_i] = '\0';
	return (concat);
}

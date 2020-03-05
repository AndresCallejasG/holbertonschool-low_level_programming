#include "holberton.h"
#include <stdlib.h>

/**
 * *array_range - allocates memory using malloc.
 *
 * @min: bottom range
 * @max: top range
 *
 * Return: array.
 * if fails null
 */
int *array_range(int min, int max)
{
	int *mem;
	int len, i, j;

	if (min > max)
		return (0);
	len = max - min + 1;
	mem = malloc(len * sizeof(int));
	if (mem == 0)
		return (0);
	for (i = 0, j = min; i < len; i++, j++)
		mem[i] = j;
	return (mem);
}

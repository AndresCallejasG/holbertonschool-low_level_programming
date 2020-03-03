#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * and initializes it with a specific char.
 *
 * @size: size of the array
 * @c : character to initialize the array
 *
 * Return: array
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size > 0)
	{
		array = malloc(size * sizeof(char));
		if (array == 0)
			return ('\0');
	}
	else
		return ('\0');
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}

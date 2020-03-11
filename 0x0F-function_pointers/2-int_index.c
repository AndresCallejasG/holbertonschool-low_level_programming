#include <stdlib.h>
/**
 * int_index - returns the index of the first element
 * for which the cmp function does not return 0
 *
 * @array: array of int
 * @size: size of the array
 * @cmp : pionter to function used to compare
 *
 * Return: index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}

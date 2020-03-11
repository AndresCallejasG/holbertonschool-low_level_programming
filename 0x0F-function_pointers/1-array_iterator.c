#include <stdlib.h>
/**
 * array_iterator - calls a funtion using every value
 * of the array as parameter
 *
 * @array: array of int
 * @size: size of the array
 * @action : pionter to function
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

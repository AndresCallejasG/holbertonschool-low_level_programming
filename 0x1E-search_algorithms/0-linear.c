#include "search_algos.h"
/**
 * linear_search - searches for a value in an array of integers
 * using the Linear search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size:  number of elements in array
 * @value: the value to search for
 *
 * Return: first index where value is located
 * If value is not present in array or if array is NULL -1
 */

int linear_search(int *array, size_t size, int value)
{
	unsigned int i;
	int index;

	index = -1;
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			index = i;
			break;
		}
	}
	/* printf("Found %d at index: %d\n", value, index); */
	return (index);
}

#include "search_algos.h"

/**
 * print_array - prints a range of elements from an array
 *
 * @array: pointer to the first element of the array
 * @from:  where to print from
 * @to: last item to print
 *
 * Return: void
 */

void print_array(int *array, unsigned int from, unsigned int to)
{
	unsigned int i;

	printf("Searching in array: ");
	for (i = from; i <= to; i++)
	{
		printf("%d", array[i]);
		if (i < to)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search - searches for a value in a sorted array of
 * integers using the Binary search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size:  number of elements in array
 * @value: the value to search for
 *
 * Return: index where value is located
 * If value is not present in array or if array is NULL -1
 */

int binary_search(int *array, size_t size, int value)
{
	unsigned int start, end, m;
	int index;

	if (!array)
		return (-1);
	index = -1;
	start = 0;
	end = size - 1;

	while (start <= end)
	{
		print_array(array, start, end);
		m = (int)(start + ((end - start) / 2));
		if (array[m] == value)
		{
			index = m;
			break;
		}
		else if (array[m] < value)
		{
			start = m + 1;
		}
		else
		{
			end = m - 1;
		}
	}

	return (index);
}

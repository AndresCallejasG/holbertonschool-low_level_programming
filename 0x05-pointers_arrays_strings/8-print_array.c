#include "holberton.h"
#include <stdio.h>
/**
* print_array - prints n elements of an array of integers
* @a: array
* @n: amount of elements
*
* Return: void
*/

void print_array(int *a, int n)
{
	int i;

	i = 0;

	while (a[i] != '\0')
	{
		if (i == n - 1)
			break;
		printf("%d", a[i]);
		printf(", ");
		i++;
	}
	printf("\n");
}

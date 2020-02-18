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
		printf("%d", a[i]);
		if (i == n - 1)
			break;
		printf(", ");
		i++;
	}
	printf("\n");
}

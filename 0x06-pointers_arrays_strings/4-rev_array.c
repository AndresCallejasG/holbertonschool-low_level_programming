#include "holberton.h"

/**
 * reverse_array - reverse an array.
 * @a: array
 * @n: size of a
 *:
 * Return: void.
 */

void reverse_array(int *a, int n)
{
	int i, aux;

	i = 0;
	aux = 0;

	for (i = 0; i < n / 2; i++)
	{
		aux = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = aux;
	}
}

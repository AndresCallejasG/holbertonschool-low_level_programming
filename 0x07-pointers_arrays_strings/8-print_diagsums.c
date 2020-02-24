#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers.
 *
 * @a: matrix
 * @size: size of matrix
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i;
	int max, sum1, sum2;

	i = 0;
	max =  size * size;
	sum1 = 0;
	sum2 = 0;

	while (i < max)
	{
		sum1 += a[i];
		i += size + 1;
	}
	i = 0;
	while (i <= max - size)
	{
		sum2 += a[i];
		i += size - 1;
	}
	printf("%d, %d\n", sum1, sum2);
}

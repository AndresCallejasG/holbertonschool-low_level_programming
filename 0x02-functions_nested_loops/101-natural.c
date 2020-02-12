#include "holberton.h"
#include <stdio.h>
/**
* main - sum of all the multiples of 3 or 5 below 1024
*
* Return: 0
*/

int main(void)
{
	int i, j, sum_i, sum_j, sum_ij;

	sum_i = 0;
	sum_j = 0;

	for (i = 0; i < 1024; i += 5)
	{
		sum_i += i;
	}
	for (j = 0; j < 1024; j += 3)
	{
		if (!((j % 5)  == 0 || (j % 10) == 0))
			sum_j += j;
	}

	sum_ij = sum_i + sum_j;
	printf("%d\n", sum_ij);

	return (0);
}

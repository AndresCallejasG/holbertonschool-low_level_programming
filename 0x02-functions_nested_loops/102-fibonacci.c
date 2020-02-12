#include "holberton.h"
#include <stdio.h>
/**
* main - prints the first 50 Fibonacci numbers
*
* Return: 0
*/

int main(void)
{
	long int i, j, k;
	int n;

	i = 1;
	j = 2;
	printf("1, 2");

	for (n = 0; n < 48; n++)
	{
		k = i + j;
		printf(", %ld", k);
		i = j;
		j = k;
	}
	printf("\n");

	return (0);
}
